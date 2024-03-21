class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer, Integer> numToIndex = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            if (numToIndex.containsKey(nums[i])) {
                if (i - numToIndex.get(nums[i]) <= k) {
                    return true;
                }
            }
            numToIndex.put(nums[i], i);
        }
        return false;
    }
}