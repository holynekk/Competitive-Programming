class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        points.sort(key = lambda no: no[0]**2 + no[1]**2)
        return points[:k]