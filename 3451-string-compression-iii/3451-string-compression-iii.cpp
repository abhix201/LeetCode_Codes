class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string ans = "";
        int l = 0;
        while (l < n) {
            int cnt = 0;
            char ch = word[l];
            while (l < n && cnt < 9 && word[l] == ch) {
                cnt++;
                l++;
            }
            ans += to_string(cnt) + ch;
        }
        return ans;
    }
};
