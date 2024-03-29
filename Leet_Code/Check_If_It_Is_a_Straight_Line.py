class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        dy = coordinates[1][1] - coordinates[0][1]
        dx = coordinates[1][0] - coordinates[0][0]
        
        for i in range(len(coordinates)-1):
            if dx * (coordinates[i+1][1] - coordinates[i][1]) != dy * (coordinates[i+1][0] - coordinates[i][0]):
                return False
        return True
