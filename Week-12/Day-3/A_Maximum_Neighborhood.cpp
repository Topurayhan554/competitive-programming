#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long max_cost = 0;
    
    for (int r = 1; r <= n; ++r) {
        for (int c = 1; c <= n; ++c) {
            
            long long val = (long long)(r - 1) * n + c;
            long long current_cost = val;
            
            if (r > 1) {
                current_cost += (val - n);
            }
            if (r < n) {
                current_cost += (val + n);
            }
            if (c > 1) {
                current_cost += (val - 1);
            }
            if (c < n) {
                current_cost += (val + 1);
            }
            
            max_cost = max(max_cost, current_cost);
        }
    }
    
    cout << max_cost << "\n";
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