class Solution {
 public:
  int countDays(int days, vector<vector<int>>& meetings) {
    if (meetings.empty()) return days;

    int count = 0;
    sort(meetings.begin(), meetings.end());
    int start = meetings[0][0];
    int end = meetings[0][1];

    for (int i = 1; i < meetings.size(); i++) {
      if (meetings[i][0] <= end) {
        end = max(end, meetings[i][1]);
      } else {
        count += (end - start + 1);
        start = meetings[i][0];
        end = meetings[i][1];
      }
    }
    count += (end - start + 1);

    return days - count;
  }
};