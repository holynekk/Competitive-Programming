class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = size(nums);
        vector<int> ans(2*n);
        for(int i = 0; i < n; i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
};