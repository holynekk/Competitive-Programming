
void moveZeroes(int* nums, int numsSize){
    for (int k = 0; k < numsSize-1; k++){
        if (nums[k] == 0){
            for (int i = k+1; i < numsSize; i++){
                if (nums[i] != 0){
                    nums[k] = nums[i];
                    nums[i] = 0;
                    break;
                }
            }
        }else;
    }
}
