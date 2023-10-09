// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
using ll = long long;
using lli = long long int;
class Solution {
public:
    int firstBadVersion(int n) {
        lli start = 0;
        lli end = n;
        lli badVersion;
        while(start <= end){
            lli mid = (start + end) / 2;
            if(isBadVersion(mid) == 1){
                badVersion = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return badVersion;
    }
};