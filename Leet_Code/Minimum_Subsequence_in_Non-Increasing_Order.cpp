class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum_all = 0;
        sort(nums.begin(), nums.end());
        for(int& num: nums) {
            sum_all += num;
        }
        
        int val = nums[0];
        int count = 0;
        for(int i = 0; i < size(nums); i++){
            if(sum_all - val > sum_all/2) {
                count++;
                val += nums[i+1];
            } else {
                break;
            }
        }
        vector<int> ans;
        for(int i = 0; i < size(nums) - count; i++){
            ans.push_back(nums[size(nums) - 1 - i]);
        }
        return ans;
    }
};