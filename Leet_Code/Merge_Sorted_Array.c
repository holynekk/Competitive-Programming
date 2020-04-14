

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    m--;
    n--;
    int index = nums1Size - 1;
    
    while (index >= 0){
        if (m < 0){
            nums1[index] = nums2[n--];
        }else if ( n < 0 ){
            nums1[index] = nums1[m--];
        }else{
            if (nums1[m] <= nums2[n]){
                nums1[index] = nums2[n--];
            }else{
                nums1[index] = nums1[m--];
            }
        }index--;
    }return nums1;
}
