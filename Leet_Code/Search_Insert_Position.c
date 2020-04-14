int searchInsert(int* nums, int numsSize, int target){
    int k;
    for (k = 0; k < numsSize; k++){
        if (target <= nums[k]){
            return k;
        }
    }return numsSize;
}
