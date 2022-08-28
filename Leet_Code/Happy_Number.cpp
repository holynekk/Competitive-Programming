class Solution {
public:
    int job(int num) {
        int total = 0;
        
        while(num) {
            int temp = num % 10;
            num /= 10;
            total += temp * temp;
        }
        return total;
    }
    
    bool isHappy(int n) {
        int slow = n;
        int fast = job(n);
        
        while(fast != 1 && fast != slow) {
            slow = job(slow);
            fast = job(job(fast));
        }
        return fast == 1;
    }
};