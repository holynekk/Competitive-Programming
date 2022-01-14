class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int index = nums.size()-1;
        int start = 0, end = nums.size()-1;
        while (index >= 0) {
            if (abs(nums[start]) > abs(nums[end])) {
                result[index] = nums[start] * nums[start];
                start++;
            } else {
                result[index] = nums[end] * nums[end];
                end++;
            }
        }
        return result;
    }
};