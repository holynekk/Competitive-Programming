class Solution:
    def arraySign(self, nums: List[int]) -> int:
        neg_count = 0
        for num in nums:
            if num < 0:
                neg_count+=1
            elif num == 0:
                return 0
        return -1 if neg_count % 2 == 1 else 1