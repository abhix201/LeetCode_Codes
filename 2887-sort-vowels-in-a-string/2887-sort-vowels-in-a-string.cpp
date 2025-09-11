
class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        vector<int> p(s.size(), 0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I' || s[i] == 'E' || s[i] == 'A') {
                v.push_back(s[i]);
                p[i] = 1;
            }
            else continue;
        }
        sort(v.begin(), v.end());
        int low = 0;
        for (int i = 0; i < s.size(); i++) {
            if (p[i] == 1) {
                s[i] = v[low];
                low++;
            }
        }
        return s;
    }
};