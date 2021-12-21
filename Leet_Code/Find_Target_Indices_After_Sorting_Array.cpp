class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size(nums); i++) {
            if (nums[i] == target) ans.push_back(i);
            else;
        }
        return ans;
    }
};