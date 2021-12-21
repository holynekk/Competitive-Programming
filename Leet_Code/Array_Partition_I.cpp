class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size(nums)-1; i+=2) {
            ans += min(nums[i], nums[i+1]);
        }
        return ans;
    }
};