class Solution {
private:
    int countDigits(int n){
        int count = 0;
        while(n){
            int x = n % 10;
            count++;
            n /= 10;
        }
        return count;
    }
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i : nums){
            int n = countDigits(i);
            if(n % 2 == 0) ans++;
        }
        return ans;
    }
};