#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int min_h = 7;
    int max_h = 0;
    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        min_h = min(min_h, h);
        max_h = max(max_h, h);
    }
    
    cout << max_h - min_h + 1 << "\n";
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