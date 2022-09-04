class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        i = j = result = 0
        
        while i < len(nums1) and j < len(nums2):
            if nums1[i] > nums2[j]:
                i += 1
            else:
                result = max(result, j-i)
                j+=1
        return result
