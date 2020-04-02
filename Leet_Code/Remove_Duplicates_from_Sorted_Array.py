class Solution(object):
    def removeDuplicates(self, nums):
        if len(nums) == 0:
            return 0;
        i = 0;
        for k in range(1,len(nums)):
            if nums[k] != nums[i]:
                i += 1
                nums[i] = nums[k]     
        return i+1
