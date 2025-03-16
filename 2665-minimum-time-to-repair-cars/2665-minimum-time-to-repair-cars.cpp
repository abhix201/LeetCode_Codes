class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1, right = 1L * ranks[0] * cars * cars;
        while(left < right){
            long long mid = (left + right) / 2, cur = 0;
            for(int i : ranks){
                cur += int(sqrt(1.0 * mid / i));
            }
            if(cur < cars){
                left = mid + 1;
            }
            else right = mid;
        }
        return left;
    }
};