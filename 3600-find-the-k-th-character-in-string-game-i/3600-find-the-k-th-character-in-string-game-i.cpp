class Solution {
private:
    char wordIterations(int k, string s) {
        if (s.size() > k) {
            return s[k - 1];
        }
        string a = s;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'z') a[i] = 'a';
            else {
                a[i]++;
            }
        }
        return wordIterations(k, s + a);
    }
public:
    char kthCharacter(int k) {
        string s = "a";
        char ans = wordIterations(k, s);
        return ans;
    }
};