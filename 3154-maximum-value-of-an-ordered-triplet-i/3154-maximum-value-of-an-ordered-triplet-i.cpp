typedef long long ll;
class Solution {
public:
    long long maximumTripletValue(vector<int>& s) {
        int size = s.size();
        ll ans = 0;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                for(int k=j+1;k<size;k++){
                    ans = max(ans,ll (s[i] - s[j]) * ll(s[k]));
                }
            }
        }
        return ans;
    }
};