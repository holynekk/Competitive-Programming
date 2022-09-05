class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        left, right = 0, len(letters)
        mid = None
        
        while left < right:
            mid = (left+right)//2
            if ord(letters[mid]) <= ord(target):
                left = mid + 1
            else:
                right = mid
        return letters[left % len(letters)]