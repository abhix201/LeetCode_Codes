class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int size = words.size(); //size of the array
        bool a[26] = {};
        for(char c : allowed) a[c - 'a'] = true;
        //populating a where we find which characters are present in allowed
        for(string w : words){
            for(char c : w){
                if(!a[c-'a']){
                    size--;
                    break;//checking each character in w to check if there is any mismatch character in the w. If present then the loop breaks
                }
            }
        }
        return size;
    }
};