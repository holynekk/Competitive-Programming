class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last_zero = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[last_zero++] = nums[i];
            }
        }
        for(int i = last_zero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};