//the question can also be solved using hash table as well 
/*
Overview
The objective of this problem is to find any possible rearrangement of a string such that no two adjacent letters are the same or return an empty string if it is not possible. For example, if the input string is aab, a valid rearrangement could be aba since no adjacent characters are the same. However, if the input string is aaab, it is not possible to rearrange the characters to meet the condition, so the expected output would be an empty string.

From the second example, it is evident that the limiting factor that determines when the string can be rearranged is the occurrences of the characters in the input string. If there are too many instances of a given character, it becomes impossible to rearrange the characters in a way that satisfies the condition of having no adjacent characters being the same. Therefore, if the count of any character exceeds half the length of the string (i.e. if it appears more than ceil(length/2) times), it is not possible to rearrange the characters, and the function should return an empty string.

Approach 1: Counting and Priority Queue
Intuition
To rearrange a given string s such that no two adjacent characters are the same we repeatedly place the most frequent characters until all characters are placed in the rearranged string.

To begin, we need to determine the frequencies of each character in s. This can be achieved by counting the characters using a hashmap or an array of size 26, with each index representing a specific character. By obtaining the character counts, we gain insights into the relative frequencies of different characters.

Once we have the character frequencies, we can proceed with the rearrangement process. The key idea is to repeatedly select the most frequent character that isn't the one previously placed. This ensures that no two adjacent characters in the rearranged string are the same.

To efficiently identify the most frequent characters and ensure proper ordering, we can use a priority queue. The priority queue allows us to retrieve the character with the highest frequency count in an efficient manner. We can find the most frequent character in O(1)O(1)O(1) and perform updates in O(log⁡k)O(\log k)O(logk) where k is the size of the priority queue.

With the priority queue in place, we can now start placing the characters in the rearranged string. We can iteratively select the most frequent character from the priority queue and append it to the rearranged string. However, we need to ensure that the selected character is different from the last character appended, avoiding any adjacent repetitions.
Algorithm
Initialize an empty list ans to store the rearranged characters.
Create a priority queue pq using a heap data structure. Each element in pq is a tuple containing the count of a character and the character itself. The priority queue is ordered in a way such that elements with higher counts have higher priority.
Pop the element with the highest priority from pq. Assign its count and character to count_first and char_first respectively.
If ans is empty or the current character char_first is different from the last character in ans, append char_first to ans. If the count of char_first is not zero, update its count by decreasing it by one and push it back to pq. Continue to the next iteration.
Otherwise, if char_first is the same as the last character in ans, it means we need to choose a different character. If pq is empty, return an empty string as it is impossible to rearrange the characters.
Pop the next element from pq, assigning its count and character to count_second and char_second respectively. Append char_second to ans.
If the count of char_second is not zero, update its count by decreasing it by one and push it back to pq.
Finally, push the original char_first back to pq.
Return the rearranged characters as a string by joining the elements in ans.
Complexity Analysis
Let NNN be the total characters in the string.
Let kkk be the total unique characters in the string.

Time complexity: O(N⋅log⁡k)O(N \cdot \log k)O(N⋅logk). We add one character to the string per iteration, so there are O(N)O(N)O(N) iterations. In each iteration, we perform a maximum of 333 priority queue operations. Each priority queue operation costs log⁡k\log klogk. For this problem, kkk is bounded by 26, so one could argue that the time complexity is actually O(N)O(N)O(N).

Space complexity: O(k)O(k)O(k). The counter used to count the number of occurrences will incur a space complexity of O(k)O(k)O(k). Similarly, the maximum size of the priority queue will also be O(k)O(k)O(k). Given that k <= 26 in this problem, one could argue the space complexity is O(1)O(1)O(1).

Approach 2: Counting and Odd/Even
Intuition
When arranging the string s to avoid adjacent repeated characters, we can adopt a strategy based on organizing the characters into two groups: even and odd indices. By filling all the even indices first, we create a structure where no adjacent characters are the same within this group. Similarly, we proceed to fill the odd indices, ensuring that adjacent characters within this group are also different from each other.

To begin, we need to determine the frequencies of each character in s, just like we did in the previous approach.

To guarantee a valid rearrangement, we need to ensure that the frequency of the most frequent letter does not exceed half the length of s, rounded up. If it does, it implies that it is not possible to arrange the string without adjacent repetitions, and we can return an empty string as the result.

We must start by placing the most frequent character of string s in the even positions (0, 2, 4, ...) to ensure the following case doesn't occur:
After the count for the most frequent character has exhausted we can place the remaining characters in the remaining positions. Once we have finished populating all even indices, we move on to the first odd index and then fill in the odd indices.
Algorithm
Create a counter char_counts to store the counts of each character in the input string s.
Find the character with the maximum count (max_count) in char_counts. Set letter as the corresponding character.
Check if max_count is greater than half of the length of the string rounded up. If so, it is not possible to rearrange the characters. Return an empty string.
Initialize a list ans of length equal to s.
Set the starting index index as 0.
Place the most frequent character letter in the ans list at every second index until its count becomes zero. Increment index by 2 for each placement and decrease the count of letter in char_counts.
Iterate through the remaining characters and their counts in char_counts.
While the count is greater than zero:
If index exceeds the length of s, set index as 1 to place all future characters at odd indices.
Place the current character at index in the ans list and increment index by 2.
Decrease the count of the character by 1.
Return the rearranged characters as a string by joining the elements in ans.
Complexity Analysis
Let NNN be the total characters in the string.
Let kkk be the tota unique characters in the string.

Time complexity: O(N)O(N)O(N). We will have to iterate over the entire string once to gather the counts of each character. Then, we we place each character in the answer which costs O(N)O(N)O(N).

Space complexity: O(k)O(k)O(k). The counter used to count the number of occurrences will incur a space complexity of O(k)O(k)O(k). Again, one could argue that because k <= 26, the space complexity is constant.
*/
class Solution {
public:
    string reorganizeString(string s) {
        vector<int> charCounts(26, 0);
        for (char c : s) {
            charCounts[c - 'a'] = charCounts[c - 'a'] + 1;
        }

        // Max heap ordered by character counts
        priority_queue<vector<int>> pq;
        for (int i = 0; i < 26; i++) {
            if (charCounts[i] > 0) {
                pq.push(vector<int>{charCounts[i], i + 'a'});
            }
        }
        
        string result;
        while (!pq.empty()) {
            auto first = pq.top();
            pq.pop();
            if (result.empty() || first[1] != result.back()) {
                result += char(first[1]);
                if (--first[0] > 0) {
                    pq.push(first);
                }
            } else {
                if (pq.empty()) {
                    return "";
                }
                auto second = pq.top();
                pq.pop();
                result += char(second[1]);
                if (--second[0] > 0) {
                    pq.push(second);
                }
                pq.push(first);
            }
        }

        return result;
    }
};
