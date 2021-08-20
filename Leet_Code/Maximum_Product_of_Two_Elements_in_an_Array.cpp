class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 = 0, m2 = 0;
        for(int i = 0; i < size(nums); i++){
            if (nums[i] >= m1){
                m2 = m1;
                m1 = nums[i];
            }else{
                m2 = max(m2, nums[i]);
            }
        }return (m1-1) * (m2-1);
    }
};