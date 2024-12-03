class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int ans = 0;
        string a = "";
        vector<string> prefixWord;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i] == ' ' or i == (sentence.size() - 1)){
                prefixWord.push_back(a+sentence[i]);
                a = "";
            }
            else{
                a += sentence[i];
            }
        }
        // for(auto s : prefixWord){
        //     cout << s << endl;
        // }
        int index = 1;
        for(string s : prefixWord){
            if(s.substr(0,searchWord.size()) == searchWord){
                //cout << s.substr(0,searchWord.size());
                ans = index;

                return ans;
            }
            else{
                index++;
            }
        }
        return -1;
    }
};