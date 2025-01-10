class Solution {
private:
	vector<int> counter(string& word){
		vector<int> count(26);
		for(char c : word){
			count[c - 'a']++;
		}
		return count;
	}
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> count(26), temp(26);
        for(string b : B){
        	temp = counter(b);
        	for(int i = 0; i < 26; i++){
        		count[i] = max(count[i], temp[i]);
        	}
        }
        vector<string> ans;
        for(string a : A){
        	temp = counter(a);
        	for(int i = 0; i < 26; i++){
        		if(temp[i] < count[i]){
        			break;
        		}
        		if(i == 25){
        			ans.push_back(a);
        		}
        	}
        }
        return ans; 
    }
};
