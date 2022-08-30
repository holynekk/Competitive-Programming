# This is the iterative one

"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        stack, result = root and [root], []
        while stack:
            curr_node = stack.pop()
            result.append(curr_node.val)
            for i in range(len(curr_node.children)-1,-1,-1):
                if curr_node.children[i]:
                    stack.append(curr_node.children[i])
        return result
        
        
        
        