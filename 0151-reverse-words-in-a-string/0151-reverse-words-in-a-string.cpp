class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = s.length()-1;
        string temp = "", ans = "";
        while(l <= r){
            char ch = s[l];
            if(ch != ' '){
                temp+=ch;
            }
            else if(ch == ' ' and s[l+1] != ' '){
                if(ans != ""){
                    ans = temp + " " + ans;
                }
                else{
                    ans = temp;
                }
                temp = "";
            }
            
            l++;
        }//while loop here is over.
        if(temp != "")
        {
            if(ans != "") ans = temp + " " + ans;
            else ans = temp;
        }
        return ans;
    }
};