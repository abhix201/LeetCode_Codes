class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string temp = "";
            char ch;
            for (int i = 0; i < s.size() - 1; i++) {
                int d1 = s[i] - '0';
                int d2 = s[i + 1] - '0';
                ch = '0' + ((d1 + d2) % 10);
                temp += ch;
            }
            s = temp;
            cout << temp << endl;
        }
        if (s.size() == 2 && s[0] == s[1]) return true;
        return false;
    }
};