class Solution {
public:
    char checkVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int i = 0, j=s.length()-1;
        while(i<j){
            while(i<j and !checkVowel(s[i])){
            i++;
        }
        while(i<j and !checkVowel(s[j])){
            j--;
        }
        if(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
        
        return s;
    }
};