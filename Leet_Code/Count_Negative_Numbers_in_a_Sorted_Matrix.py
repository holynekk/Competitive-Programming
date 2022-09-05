class Solution:
    def helper(self, arr: List[int]) -> int:
        left, right, mid = 0, len(arr), None
        
        while left < right:
            mid = (left+right)//2
            if arr[mid] < 0:
                right = mid
            else:
                left = mid + 1
        return len(arr) - right
    
    def countNegatives(self, grid: List[List[int]]) -> int:
        count = 0
        for li in grid:
            count += self.helper(li)
        return count
            