class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& queries) {
        vector<int> result;
        for(int i=1;i<a.size();i++){
            a[i] = a[i] ^ a[i-1]; //storing the new values in the same array
        }
        for(int i=0;i<queries.size();i++){
            int s = queries[i][0];//point to the first index in the subarry
            int e = queries[i][1]; //point to the second index in the subarray  
            if(s == 0) result.push_back(a[e]);
            else result.push_back(a[s-1]^a[e]);

        }
        return result;
        //time complexity = O(n);
        //space complexity O(1);
    }
};