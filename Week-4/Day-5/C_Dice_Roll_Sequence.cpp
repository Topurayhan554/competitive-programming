#include <bits/stdc++.h>
using namespace std; 

const int INF = 1e9;

bool is_adjacent(int u, int v) {
    if (u == v) return false;      
    if (u + v == 7) return false; 
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> dp(7, 0);

    // Initial state for the first element
    for (int v = 1; v <= 6; ++v) {
        dp[v] = (a[0] == v ? 0 : 1);
    }

    for (int i = 1; i < n; ++i) {
        
        vector<int> next_dp(7, INF);
        for (int v = 1; v <= 6; ++v) {

            int cost = (a[i] == v ? 0 : 1);
            for (int u = 1; u <= 6; ++u) {
                if (is_adjacent(u, v)) {
                    next_dp[v] = min(next_dp[v], dp[u] + cost);
                }
            }
        }
        dp = next_dp;
    }

    int result = INF;
    for (int v = 1; v <= 6; ++v) {
        result = min(result, dp[v]);
    }
    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}