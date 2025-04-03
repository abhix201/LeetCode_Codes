class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        int a = 0, b = 0;
        for(int i : nums){
            ans = max(ans, 1LL * b * i);
            b = max(b, a - i);
            a = max(a, i);
        }
        return ans;
    }
};
