

int findLengthOfLCIS(int* nums, int numsSize){
    int num = 1, max = 1;
    if (numsSize == 0){
        return 0;
    }
    for (int k = 1; k < numsSize; k++){
        if (nums[k] > nums[k-1]){
            num++;
            if (num > max){
                max = num;
            }
        }else {
            num = 1;
        }
    }return max;
}


