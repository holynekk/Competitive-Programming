class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        result, n = 0, len(arr)
        
        for i in range(len(arr)):
            endingHere = i + 1
            startingHere = n - i
            totalSubarrays = endingHere * startingHere
            oddSubarrays = totalSubarrays // 2
            if totalSubarrays % 2 == 1:
                oddSubarrays += 1
            result += oddSubarrays * arr[i]
            
        return result