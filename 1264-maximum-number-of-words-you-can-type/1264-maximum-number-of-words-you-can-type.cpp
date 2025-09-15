class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt = 0, wCount = 0;
        stringstream ss(text);
        string word;
        while (ss >> word) {
            wCount++;
            for (char c : word) {
                if (isValid(c, brokenLetters)) {
                    cnt++;
                    break;
                }
            }
        }
        return wCount - cnt;
    }
private:
    bool isValid(char c, string brokenLetters) {
        return string(brokenLetters).find(c) != string::npos;
    }
};