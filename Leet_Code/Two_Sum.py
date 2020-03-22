class Solution(object):
    def twoSum(self, nums, target):
        anan = len(nums)
        for i in range(anan):
            for k in range(i+1,anan):
                if target == nums[i] + nums[k]:
                    return [i,k]