class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> f(A.size() + 1, 0);
        int count = 0;
        vector<int> ans;
        for (int i = 0; i < A.size(); i++) {
            //int count = 0;
            if (++f[A[i]] == 2) {
                count++;
            }
            if (++f[B[i]] == 2) {
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};