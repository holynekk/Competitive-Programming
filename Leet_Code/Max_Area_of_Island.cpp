class Solution {
public:
    int visit(vector<vector<int>>& grid, int row, int col){
        int m = grid.size();
        int n = grid[0].size();
        int area = 1;
        grid[row][col] = 0;
        vector<int> directions({-1,0,1,0,-1});
        for(int i = 0; i < 4; i++){
            int r = row + directions[i], c = col + directions[i+1];
            if(r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1){
                area += visit(grid, r, c);
            }
        }
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j]){
                    res = max(visit(grid, i, j), res);
                }
            }
        }
        return res;
    }
};