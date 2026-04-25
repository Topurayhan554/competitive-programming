
class Solution {
public:
    int dfs(int r, int c, vector<vector<int>>& grid) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0) {
            return 0;
        }
        
        int fish = grid[r][c];

        grid[r][c] = 0; 
        
        fish += dfs(r + 1, c, grid);
        fish += dfs(r - 1, c, grid);
        fish += dfs(r, c + 1, grid);
        fish += dfs(r, c - 1, grid);
        
        return fish;
    }
    
    int findMaxFish(vector<vector<int>>& grid) {
        int max_fish = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    max_fish = max(max_fish, dfs(i, j, grid));
                }
            }
        }
        return max_fish;
    }
};