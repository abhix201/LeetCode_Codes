class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int i : digits) freq[i]++;
        vector<int> result;
        for (int i = 100; i <= 998; i += 2) {
            vector<int> count(10, 0);
            int h = i / 100, u = (i % 100) % 10, t = (i % 100) / 10;
            count[h]++;
            count[t]++;
            count[u]++;
            bool valid = true;
            for (int i = 0; i < count.size(); i++) {
                if (count[i] > freq[i]) {
                    valid = false;
                    break;
                }
            }
            if (valid) result.push_back(i);
        }
        return result;
    }
};