#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int max_idx = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] == n) {
            max_idx = i;
        }
    }
    
    for (int i = 0; i < max_idx; i++) {
        if (p[i] >= p[i + 1]) {
            cout << "NO\n";
            return;
        }
    }
    
    for (int i = max_idx; i < n - 1; i++) {
        if (p[i] <= p[i + 1]) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
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