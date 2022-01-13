class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) return n;
        int left = 0, mid = 1, right = 1, temp;
        while (n-- > 2) {
            temp = left + mid + right;
            left = mid;
            mid = right;
            right = temp; 
        }
        return right;
    }
};