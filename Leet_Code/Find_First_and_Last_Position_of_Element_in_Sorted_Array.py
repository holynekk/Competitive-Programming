class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        start = -1
        end = -1
        for i in range(len(nums)):
            if nums[i] == target:
                start = i
                for k in range(i+1, len(nums)):
                    if nums[k] == target:
                        end = k
                break
        if start != -1 and end == -1:
            end = start
        return [start, end]