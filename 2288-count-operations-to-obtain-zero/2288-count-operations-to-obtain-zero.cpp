class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt = 0;
        while(num1){
            if(num1>=num2){
                if(num2==0){
                    break;
                }
                else{
                    num1 = num1 - num2;
                    cnt++;
                }
                
            }
            else{
                num2 = num2 - num1;
                cnt++;
            }
        }
        return cnt;
    }
};