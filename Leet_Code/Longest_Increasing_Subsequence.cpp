class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int num = size(nums);
        if (num <= 1) return num;
        int maxx = 1;
        vector<int> length(num);
        for (int k = 0; k < num; k++){
            length[k] = 1;
            for(int i = 0; i < num; i++){
                if (nums[k] > nums[i]){
                    length[k] = max(length[k], length[i]+1);
                    if (maxx < length[k]) maxx = length[k];
                }
            }
        }return maxx;
    }
};