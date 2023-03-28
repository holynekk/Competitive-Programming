class Solution {
    public boolean isMonotonic(int[] nums) {
        int n = nums.length;
        if (n < 2) {
            return true;
        }

        boolean is_increasing = nums[0] <= nums[n-1];

        for (int i = 1; i < n; i++) {
            if (nums[i-1] == nums[i]) {
                continue;
            }
            if ((nums[i-1] < nums[i]) != is_increasing) {
                return false;
            }
        }
        return true;
        
    }
}
