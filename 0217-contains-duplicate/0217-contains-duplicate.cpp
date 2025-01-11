class Solution {
public:
    bool containsDuplicate(vector<int> nums) {
        int n = nums.size();
        unordered_set<int> s;
        //as we dont care about the order of the numbers in the set/array
        //hence unordered set as the insertion time is O(1)
        for (int i : nums) {
            s.insert(i);
        }
        if (s.size() != n) return true;
        return false;
    }
};