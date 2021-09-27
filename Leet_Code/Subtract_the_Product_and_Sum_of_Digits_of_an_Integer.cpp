class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, mult = 1;
        int num;
        while(n > 0) {
            num = n % 10;
            sum += num;
            mult *= num;
            n /= 10;
        }
        return mult - sum;
    }
};