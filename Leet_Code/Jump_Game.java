class Solution {

    Boolean[] alreadyChecked;

    public boolean canJump(int[] nums) {
        int numsLength = nums.length;

        alreadyChecked = new Boolean[nums.length];
        Arrays.fill(alreadyChecked, Boolean.FALSE);

        alreadyChecked[numsLength-1] = true;

        for (int i = numsLength-2; i >= 0; i--) {
            if (nums[i] == 0) {
                alreadyChecked[i] = false;
                continue;
            }

            int flag = 0, reach = i + nums[i];

            for (int j = i + 1; j <= reach; j++) {
                if (j < numsLength && alreadyChecked[j]) {
                    alreadyChecked[i] = true;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                continue;
            }

            alreadyChecked[i] = false;
        } 
        return alreadyChecked[0];
    }
}