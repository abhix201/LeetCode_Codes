class Solution {
public:
    vector<int> minOperations(string s) {
        int n = s.size();
        vector<int> ans(n, 0);
        int count = 0, operations = 0;
        //left to right prefix sum approach
        for(int i=0;i<n;i++){
            ans[i] += operations;
            if(s[i] == '1') count++;
            operations += count;
        }
        //right to left sum calculations
        count = 0, operations = 0;
        for(int i=n-1;i>=0;i--){
            ans[i] += operations;
            if(s[i] == '1') count++;
            operations += count;
        }
        return ans;
    }
};