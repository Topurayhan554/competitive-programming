#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    

    if (k < n || k > 2 * n - 1) {
        cout << -1 << "\n";
        return;
    }

    int c = 2 * n - k;
    int m = n - c + 1; 
    
    vector<vector<int>> A(n + 1, vector<int>(n + 1, 0));
    
    int offset = c - 1;
    
    for (int i = 1; i <= offset; ++i) {
        A[i][i] = i;
    }
    
    if (m > 0) {
        for (int j = 1; j <= m - 1; ++j) {
            A[n][offset + j] = offset + m - j;
        }
        A[n][n] = offset + m;
        for (int i = 1; i <= m - 1; ++i) {
            A[offset + i][n] = offset + m + (m - i);
        }
        
        int current_val = offset + 2 * m;
        for (int i = 1; i <= m - 1; ++i) {
            for (int j = 1; j <= m - 1; ++j) {
                A[offset + i][offset + j] = current_val++;
            }
        }
    }
    
    int rest_val = offset + m * m + 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (A[i][j] == 0) {
                A[i][j] = rest_val++;
            }
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << A[i][j] << (j == n ? "" : " ");
        }
        cout << "\n";
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