#define ll long long

class Solution {
public:
    ll minimumSteps(string s) {
        ll ans = 0, blackCounter = 0;
        for(char a : s){
            if(a == '0') ans += blackCounter;
            else blackCounter++;
        }
        return ans;
    }
};