class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        int m = part.size();

        for (char c : s) {
            ans.push_back(c); 
            if (ans.size() >= m && ans.substr(ans.size() - m, m) == part) {
                ans.erase(ans.size() - m, m);
            }
        }
        return ans;
    }
};