class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!size(nums)){
            return 0;
        }
        int i = 0;
        for(int k = 1; k < size(nums); k++){
            if(nums[i] != nums[k]){
                nums[++i] = nums[k];
            }
        }
        return i+1;
            
        
    }
};