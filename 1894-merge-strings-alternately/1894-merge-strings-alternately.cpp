class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final = "";
        int n = word1.length() , m = word2.length();
        string greater = "";
        if(n>m){
            greater=word1.substr(m,n);
        }
        else{
            
            greater=word2.substr(n,m);
        }
        int i=0,j=0;
        while(i<n && j<m){
            final = final+word1[i];
            final = final+word2[j];
            i++;
            j++;   
        }
        return final+greater;
    }
};