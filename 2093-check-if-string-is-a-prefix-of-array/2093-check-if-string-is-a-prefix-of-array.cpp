class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        string temp = "";
        for(int i=0;i<n;i++){
            temp += words[i];
            if(temp.size() == s.size()){
                if(s == temp) return true;
            }
        }
        return false;
    }
};