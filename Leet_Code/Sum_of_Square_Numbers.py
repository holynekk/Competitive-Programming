class Solution:
    def helper(self, b: int, c: int) -> bool:
        left, right, mid = 0, c, None
        while left < right:
            mid = (left+right)//2
            if mid * mid == b:
                return True
            elif mid * mid < b:
                left = mid + 1
            else:
                right = mid
        return False
    
    def judgeSquareSum(self, c: int) -> bool:
        if c <= 1:
            return True
        i = 0
        while i*i <= c:
            b = c - i*i
            if self.helper(b, c):
                return True
            i+=1
        return False