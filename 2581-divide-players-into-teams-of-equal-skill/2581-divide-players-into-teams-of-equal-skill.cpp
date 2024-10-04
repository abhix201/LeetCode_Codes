
#define ll long long
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int size = skill.size();
        sort(skill.begin(),skill.end());
        ll cur = skill[0] + skill[size-1];
        ll ans = 0;
        ll l = 0;
        ll r = size-1;
        while(l < r){
            if(skill[l] + skill[r] == cur){
                ans += (skill[l] * skill[r]);
                l++;
                r--;
            }
            else{
                return -1;
                break;
            }
        }
        return ans;
    }
};
