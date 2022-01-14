class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int left = 1, right = 2, temp;
        for (int i = 3; i <= n; i++) {
            temp = left;
            left = right;
            right += temp;
        }
        
        return right;
    }
};