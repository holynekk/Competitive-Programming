# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def helper(self, nums: List[int], low: int, high: int) -> Optional[TreeNode]:
        if low == high:
            return None
        mid = (low+high)//2
        head = TreeNode(nums[mid])
        head.left = self.helper(nums, low, mid)
        head.right = self.helper(nums, mid+1, high)
        return head

    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        left, right = 0, len(nums)
        mid = (left+right)//2
        head = TreeNode(nums[mid])
        head.left = self.helper(nums, left, mid)
        head.right = self.helper(nums, mid+1, right)
        return head