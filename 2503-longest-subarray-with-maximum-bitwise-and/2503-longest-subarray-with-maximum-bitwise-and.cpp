class Solution {
public:
	int longestSubarray(vector<int>& a) {
		int x = *max_element(a.begin(), a.end()); //This iterator points to the index of the first time the largest element that is present in the array.
		int len = 0, ans = 0;
		for (int ele : a) {
			if (ele == x) ans = max(ans, ++len);
			else len = 0;
		}
		return ans;
	}
};