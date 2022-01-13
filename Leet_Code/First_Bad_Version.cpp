// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 0, end = n, mid;
        while (start < end) {
            mid = (start + end) /2;
            if (isBadVersion(mid)) {
                end = mid;
            } else {
                start = mid+1;
            }
        } return start;
    }
};