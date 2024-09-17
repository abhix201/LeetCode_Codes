class Solution {
public:
	vector<string> uncommonFromSentences(string s1, string s2) {
		vector<string> ans;
		string finals = s1 + " " + s2;
		string temp = "";
		unordered_map<string, int> mp;
		for (int i = 0; i <= finals.size(); i++) {
			if (finals[i] != ' ' && finals[i] != finals[finals.size()]) {
				temp += finals[i];
			}
			else {
				mp[temp]++;
				temp = "";
			}
		}
		for (auto it : mp) {
			if (it.second == 1) {
				ans.push_back(it.first);
			}
		}
		return ans;
	}
};