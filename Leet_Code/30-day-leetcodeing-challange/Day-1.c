/* XOR bitwise operation */

int singleNumber(int* nums, int numsSize){
    int k, total = 0;
    for (k = 0; k < numsSize; k++){
        total ^= nums[k];
    }return total;
}
