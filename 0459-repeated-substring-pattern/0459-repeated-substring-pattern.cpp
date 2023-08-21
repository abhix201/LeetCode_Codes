class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string final = s + s;
        if(final.substr(1,final.size()-2).find(s)!=-1){
            return true;
        }
        return false;
    }
};