
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        } 
        int best =-2147483647, sum = 0;
        for (int k = 0; k < nums.size(); k++){
            sum = max(nums[k], sum + nums[k]);
            best = max(best,sum);
        }return best;
    }
}
