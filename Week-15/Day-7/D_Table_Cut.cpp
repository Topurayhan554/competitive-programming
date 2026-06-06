#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m));
    int total_ones = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            total_ones += grid[i][j];
        }
    }

    long long target = total_ones / 2;
    long long max_product = target * (total_ones - target);
    
    cout << max_product << "\n";

    int k = 1, c = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        int row_sum = 0;
        for (int j = 0; j < m; j++) {
            row_sum += grid[i][j];
        }

        if (target > 0 && target >= row_sum) {
            target -= row_sum;
            if (target == 0) {
                k = i + 1;
                c = m;
                break;
            }
        } 
        else {
            k = i + 1;
            c = 0;
            for (int j = 0; j < m; j++) {
                if (target == 0) break;
                if (grid[i][j] == 1) {
                    target--;
                }
                c = j + 1;
            }
            break;
        }
    }

    string ans = "";
    
    for (int i = 0; i < k - 1; i++) ans += 'D';

    for (int i = 0; i < c; i++) ans += 'R';
    
    if (k > 0) ans += 'D';
    
    for (int i = 0; i < m - c; i++) ans += 'R';
    
    for (int i = 0; i < n - k; i++) ans += 'D';

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}