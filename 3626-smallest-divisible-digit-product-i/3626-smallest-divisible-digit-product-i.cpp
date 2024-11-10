class Solution {
private:
    int digitProduct(int n) {
        int p = 1;
        while (n > 0) {
            p *= n % 10;
            n /= 10;
        }
        return p;
    }
public:
    int smallestNumber(int n, int t) {
        while (digitProduct(n) % t != 0) {
            n++;
        }
        return n;
    }
};