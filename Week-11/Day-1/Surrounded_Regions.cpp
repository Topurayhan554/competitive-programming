class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        
        int m = board.size();
        int n = board[0].size();
        
        auto dfs = [&](auto& self, int r, int c) -> void {
            if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != 'O') {
                return;
            }
            
            board[r][c] = '#';
            
            self(self, r + 1, c);
            self(self, r - 1, c);
            self(self, r, c + 1);
            self(self, r, c - 1);
        };
        
        for (int i = 0; i < m; ++i) {
            if (board[i][0] == 'O') dfs(dfs, i, 0);
            if (board[i][n - 1] == 'O') dfs(dfs, i, n - 1);
        }
        
        for (int j = 0; j < n; ++j) {
            if (board[0][j] == 'O') dfs(dfs, 0, j);
            if (board[m - 1][j] == 'O') dfs(dfs, m - 1, j);
        }
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'O') {

                    board[i][j] = 'X';
                } else if (board[i][j] == '#') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};