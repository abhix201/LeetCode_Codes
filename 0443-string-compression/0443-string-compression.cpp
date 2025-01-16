class Solution {
 public:
  int compress(vector<char>& chars) {
    int ans = 0;
    string s = "";
    int count = 1;

    for (int i = 1; i < chars.size();
         i++) {  // Fix: Changed i <= chars.size() to i < chars.size()
      if (chars[i] == chars[i - 1]) {
        count++;
      } else {
        s += chars[i - 1];
        if (count > 1) {
          s += to_string(count);
        }
        count = 1;  // Reset count
      }
    }

    // Handle the last group of characters
    s += chars.back();  // Add the last character
    if (count > 1) {
      s += to_string(count);
    }

    // Update the original vector
    for (int i = 0; i < s.size(); i++) {
      chars[i] = s[i];
    }
    ans = s.size();
    return ans;
  }
};
