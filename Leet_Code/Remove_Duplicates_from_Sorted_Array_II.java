class Solution {
    public int removeDuplicates(int[] nums) {
        int idx = 1;
        for (int i = 1; i < nums.length; i++) {
            if (idx == 1 || nums[i] != nums[idx-2]) {
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
}