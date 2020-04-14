int rob(int* nums, int numsSize){
    int a = 0, b = 0;
    for (int k = 0; k < numsSize; k++){
        int tmp = a;
        a =  b + nums[k] > a ? b + nums[k] : a;
        b = tmp;
    }return a;
}
