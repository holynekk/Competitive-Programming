class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        myHash = set()
        for num in nums:
            if num in myHash:
                return True
            else:
                myHash.add(num)
        return False
        
        