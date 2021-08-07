class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for(int i = 0, a = 0; i < n; i++, a+=2){
            ans[a] = nums[i];
            ans[a+1] = nums[i+n];
        }
        return ans;
    }
};