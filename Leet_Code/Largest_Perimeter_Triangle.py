class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        sorted_nums = sorted(nums)
        for i in range(len(nums)-3, -1, -1):
            if sorted_nums[i] + sorted_nums[i+1] > sorted_nums[i+2]:
                return sorted_nums[i] + sorted_nums[i+1] + sorted_nums[i+2]
        return 0