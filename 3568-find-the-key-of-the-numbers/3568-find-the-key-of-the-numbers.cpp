class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int ans = 0;
        int place = 1;
        while(num1 > 0 || num2 > 0 || num3 > 0){
            int digit1 = num1%10;
            int digit2 = num2%10;
            int digit3 = num3%10;
            ans += min(digit1,min(digit2,digit3)) * place;
            place *= 10;
            num1/=10;
            num2/=10;
            num3/=10;
            //cnt++;
        }
        return ans;
    }
};
