class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // Use a set for O(1) average time lookups (fast)
        unordered_set<char> broken_set(brokenLetters.begin(), brokenLetters.end());
        
        stringstream ss(text);
        string word;
        int typable_words = 0;
        
        // Process word by word to save memory (low space)
        while (ss >> word) {
            bool is_broken = false;
            for (char c : word) {
                if (broken_set.count(c)) { // O(1) check
                    is_broken = true;
                    break;
                }
            }
            if (!is_broken) {
                typable_words++;
            }
        }
        
        return typable_words;
    }
};