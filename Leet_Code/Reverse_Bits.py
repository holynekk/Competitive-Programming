class Solution:
    def reverseBits(self, n: int) -> int:
        result = 0
        for i in range(32):
            result = result << 1
            if (n & 1) == 1:
                result += 1
            n = n >> 1
            
        return result