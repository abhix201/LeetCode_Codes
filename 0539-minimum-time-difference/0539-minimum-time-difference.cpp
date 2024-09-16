
class Solution {
public:
	int findMinDifference(vector<string>& timePoints) {
		vector<int> v;
		for (int i = 0; i < timePoints.size(); i++) {
			int hr = (timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0');
			int m = (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
			int mins = hr * 60 + m;
			v.push_back(mins);
		}
		sort(v.begin(), v.end());
		int ans = INT_MAX;
		for (int i = 1; i < v.size(); i++) {
			ans = min(ans, v[i] - v[i - 1]);
		}
		return min(ans, 24 * 60 - v[v.size() - 1] + v[0]);
	}
};