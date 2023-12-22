class Solution {
public:
    int maxScore(string s) {
        int size = s.size(), l = 0, r = 0, ans = INT_MIN;
        string left, right;
        vector<vector<string>> s1;
        if(size == 2 && s == "10") return 0;
        if(size == 2 && s == "00") return 1;
        if(size == 2 && s == "01") return 2;        
        for(int i=0;i<size-1;i++){
            left = s.substr(0,i+1);
            right = s.substr(i+1,size);
            s1.push_back({left,right});
        }
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<2;j++){
                for(auto c : s1[i][0]){
                    if(c == '0') l++;
                }
                for(auto c : s1[i][1]){
                    if(c == '1') r++;
                }
                ans = max(ans, l+r);
                l = 0, r = 0;
            }
        }
        return ans;
    }
};
