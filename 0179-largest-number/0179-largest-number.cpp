
bool comp(int a, int b){
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }
class Solution {   
public:
    string largestNumber(vector<int>& m) {
        string ans = "";
        sort(m.begin(),m.end(),comp);
        if(m[0] == 0) return "0";
        for(auto t : m){
            ans += to_string(t);
        }      
        return ans;
    }
};