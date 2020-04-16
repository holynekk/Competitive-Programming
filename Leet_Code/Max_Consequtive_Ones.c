

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int counter = 0;
    int max = 0;
    for (int k = 0; k < numsSize; k++){
        if (nums[k] == 1){
            counter++;
            if (max < counter){
                max = counter;
            }
        }else{
            counter = 0;
        }
    }return max;
}


