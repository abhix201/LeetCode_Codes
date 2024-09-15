class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //more optimized solution
        int size = words.size();
        bool a[123] = {};
        for(char c:allowed) a[c] = true;
        for(string w: words){
            for(char c:w){
                if(!a[c]){
                    size--;
                    break;
                }
            }
        }   
        return size;
    }
};