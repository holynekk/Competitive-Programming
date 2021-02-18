class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_index = size(digits)-1;
        digits[last_index]++;
        while(last_index){
            if(digits[last_index] == 10){
                digits[last_index--] = 0;
                digits[last_index]++;
            }else break;
        }
        if(digits[0] == 10){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};