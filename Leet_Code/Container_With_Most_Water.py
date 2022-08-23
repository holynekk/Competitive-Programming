class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        max_volume = 0
        
        while left < right:
            new_volume = (right-left) * min(height[right], height[left])
            max_volume = new_volume if new_volume > max_volume else max_volume
            if height[left] < height[right]:
                left += 1
            elif height[right] < height[left]:
                right -= 1
            else:
                left += 1
                right -= 1
        return max_volume
