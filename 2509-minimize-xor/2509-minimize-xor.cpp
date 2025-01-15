class Solution {
private:
    int countOnes(int number) {
        int count = 0;
        while (number > 0) {
            count += number & 1;
            number >>= 1;
        }
        return count;
    }
    int addSetBits(int num, int bitsToAdd) {
        int bitPos = 0;
        while (bitsToAdd > 0) {
            while ((num >> bitPos) & 1) ++bitPos;
            num |= (1 << bitPos);
            --bitsToAdd;
        }
        return num;
    }
    int removeSetBits(int num, int bitsToRemove) {
        while (bitsToRemove > 0) {
            num &= (num - 1);
            --bitsToRemove;
        }
        return num;
    }

public:
    int minimizeXor(int num1, int num2) {
        int n = countOnes(num1);
        int m = countOnes(num2);
        if (n == m) return num1;
        if (n < m) return addSetBits(num1, m - n);
        return removeSetBits(num1, n - m);
    }
};
