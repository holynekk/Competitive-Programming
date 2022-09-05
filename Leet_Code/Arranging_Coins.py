class Solution:
    def arrangeCoins(self, n: int) -> int:
        left, right, mid = 0, n, None
        
        while left <= right:
            mid = (left+right)//2
            curr_total = mid * (mid+1) // 2
            
            if curr_total == n:
                return mid
            if n < curr_total:
                right = mid - 1
            else:
                left = mid + 1
        return right