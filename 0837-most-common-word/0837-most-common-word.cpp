class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        string ans = "";
        unordered_map<string, int> mp;
        unordered_set<string> banned_set(banned.begin(), banned.end()); // Create a set of banned words for fast lookup
        string word = "";
        
        for (int i = 0; i <= s.size(); i++) {
            if (i < s.size() && isalpha(s[i])) {  // Only process alphabetic characters
                word += tolower(s[i]);  // Convert to lowercase and build the word
            } else if (!word.empty()) { // If we encounter a non-alphabetic character and have a word
                if (banned_set.find(word) == banned_set.end()) { // Check if the word is not banned
                    mp[word]++;
                }
                word = "";  // Reset the word for the next iteration
            }
        }
        
        int max_count = 0;
        for (auto& entry : mp) {
            if (entry.second > max_count) {
                ans = entry.first;
                max_count = entry.second;
            }
        }
        
        return ans;
    }
};
