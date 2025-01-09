class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        int sn = s.size();
        int n = words.size();
        for(int i=0;i<n;i++){
            int l = words[i].size();
            if(l <= sn){
                if(words[i] == s.substr(0,l)) count++;
            }
        }
        return count;
    }
};