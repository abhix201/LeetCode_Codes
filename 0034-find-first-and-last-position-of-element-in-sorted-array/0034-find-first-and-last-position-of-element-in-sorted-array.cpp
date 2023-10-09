#define rep1(i, n) for (ll i = 0; i < ll(n); ++i)
#define rep3(i, s, n, d) for (ll i = ll(s); i < ll(n); i += d)
#define rep2(i, s, n) for (ll i = ll(s); i <= ll(n); ++i)
#define pb push_back
using ll = long long;
using vi = vector<int>;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vi ans;
        int size = nums.size();
        if(size == 0) return {-1,-1};
        rep1(i,size){
            if(nums[i] == target){
                ans.pb(i);
            }
            else if(i == size-1 && ans.size() == 0){
                return {-1,-1};
            }
        }
        return {ans[0],ans[ans.size()-1]};
    }
};