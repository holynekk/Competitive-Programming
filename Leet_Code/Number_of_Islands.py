class Solution:
    def helper(self, grid: List[List[str]], r: int, c: int):
        if grid[r][c] == '1':
            grid[r][c] = '0'
            if r >= 1:
                self.helper(grid, r-1, c)
            if c >= 1:
                self.helper(grid, r, c-1)
            if r < len(grid)-1:
                self.helper(grid, r+1, c)
            if c < len(grid[0])-1:
                self.helper(grid, r, c+1)
    def numIslands(self, grid: List[List[str]]) -> int:
        result = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1':
                    result += 1
                    self.helper(grid, i, j)
        return result