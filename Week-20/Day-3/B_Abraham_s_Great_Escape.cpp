#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin >> n >> k;
    
    int C = n * n - k;
    
    if (C == 1) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    
    vector<pair<int, int>> snake;
    for (int r = 0; r < n; ++r) {
        if (r % 2 == 0) {
            for (int c = 0; c < n; ++c) snake.push_back({r, c});
        } else {
            for (int c = n - 1; c >= 0; --c) snake.push_back({r, c});
        }
    }
    
    vector<string> grid(n, string(n, ' '));
    
    auto get_dir = [](int r1, int c1, int r2, int c2) {
        if (r1 == r2) {
            if (c1 < c2) return 'R';
            else return 'L';
        } else {
            if (r1 < r2) return 'D';
            else return 'U';
        }
    };
    
    if (C == 0) {
         for (int i = 0; i < n * n - 1; ++i) {
            grid[snake[i].first][snake[i].second] = get_dir(snake[i].first, snake[i].second, snake[i+1].first, snake[i+1].second);
        }
        grid[snake.back().first][snake.back().second] = 'D';
    } else {
        grid[snake[0].first][snake[0].second] = get_dir(snake[0].first, snake[0].second, snake[1].first, snake[1].second);
        grid[snake[1].first][snake[1].second] = get_dir(snake[1].first, snake[1].second, snake[0].first, snake[0].second);
        
        for (int i = 2; i < C; ++i) {
            grid[snake[i].first][snake[i].second] = get_dir(snake[i].first, snake[i].second, snake[i-1].first, snake[i-1].second);
        }
 
        for (int i = C; i < n * n - 1; ++i) {
            grid[snake[i].first][snake[i].second] = get_dir(snake[i].first, snake[i].second, snake[i+1].first, snake[i+1].second);
        }
        
        if (C < n * n) {
            grid[snake.back().first][snake.back().second] = 'D';
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << grid[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}