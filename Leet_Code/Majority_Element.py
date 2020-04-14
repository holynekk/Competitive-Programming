#Sorted to psuh the majority element to the end of the array, and then return n/2 th element of the array.

class Solution(object):
    def majorityElement(self, nums):
        nums = sorted(nums)
        return nums[len(nums)/2]
        
