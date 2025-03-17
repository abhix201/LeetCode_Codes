class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> f(501, 0);
        for(auto i : nums){
            f[i]++;
        }
        for(int i : f){
            if(i % 2 != 0) return false;
        }
        return true;
    }
};