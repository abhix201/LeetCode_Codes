class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int L1 = words[i].size();
                int L2 = words[j].size();
                //if (L1 > L2) return false;
                if (L1 <= L2) {
                    if (words[j].substr(0, L1) == words[i] && words[j].substr(L2 - L1) == words[i]) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};