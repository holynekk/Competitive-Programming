class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> result = new ArrayList<>();
        if (nums.length == 1) {
            result.add(Integer.toString(nums[0]));
            return result;
        }
        int startIndex = 0, endIndex = 1;
        while (endIndex < nums.length) {
            if (nums[endIndex-1] == nums[endIndex] - 1) {
                endIndex++;
            } else {
                result.add(nums[startIndex] + "" + (endIndex - startIndex == 1 ? "" : "->" + nums[endIndex-1]));
                startIndex = endIndex++;
            }
        }
        if (startIndex <= nums.length - 1) {
            result.add(nums[startIndex] + "" + (endIndex - startIndex == 1 ? "" : "->" + nums[endIndex-1]));
        }
        return result;
    }
}