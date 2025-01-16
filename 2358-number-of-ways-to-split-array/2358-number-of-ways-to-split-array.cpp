class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        long long sum = 0;
        for(int i : nums){
            sum += i;
        }
        //cout << sum << endl;
        long long a = 0;
        for(int i=0;i<n-1;i++){
            a += nums[i];
            sum -= nums[i];
            if(a >= sum){
                ans++;
                //cout << a << " " << sum << endl ;
            }
        }
        return ans;
    }
};