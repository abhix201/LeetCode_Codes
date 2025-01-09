class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int p = pref.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int l = words[i].size();
            string extract = words[i].substr(0,p);
            if(l >= p){
                if(extract == pref) count++;
            }
        }
        return count;
    }
};