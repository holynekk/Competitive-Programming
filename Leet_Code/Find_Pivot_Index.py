class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = 0
        left_sum = 0
        for x in nums:
            total += x
        for i in range(len(nums)):
            if left_sum == total - left_sum - nums[i]:
                return i
            left_sum += nums[i]
        return -1
