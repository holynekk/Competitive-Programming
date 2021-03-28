class Solution {
    int a, b;
public:
    int calculate_gold(vector<vector<int>>& grid, int i, int j){
        if(!grid[i][j]) return 0;
        int temp = grid[i][j], ans = 0;
        grid[i][j] = 0;
        if(i > 0) ans = max(ans, temp + calculate_gold(grid, i-1, j));
        if(j > 0) ans = max(ans, temp + calculate_gold(grid, i, j-1));
        if(i < a-1) ans = max(ans, temp + calculate_gold(grid, i+1, j));
        if(j < b-1) ans = max(ans, temp + calculate_gold(grid, i, j+1));
        grid[i][j] = temp;
        return ans;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans = 0;
        a = grid.size();
        b = grid[0].size();
        for(int i = 0; i < a; i++){
            for(int k = 0; k < b; k++){
                ans = max(ans, calculate_gold(grid, i, k));
            }
            
        }
        return ans;
    }
};