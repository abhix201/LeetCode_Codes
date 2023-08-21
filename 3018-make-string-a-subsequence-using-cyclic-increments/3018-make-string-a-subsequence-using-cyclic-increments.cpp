class Solution {
public:
    bool canMakeSubsequence(string a, string b) {
        int n = a.size() , m = b.size() , i = 0 , j = 0;
        while(i<n && j<m){
            char current = a[i];
            if(current == 'z') {
                current = 'a';
            }
            else current++;
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else if(current == b[j]){
                i++;
                j++;
            }
            else {
                i++;
            }
        }
        if(j == m){
            return true;
        }
        return false;
        
    }
};