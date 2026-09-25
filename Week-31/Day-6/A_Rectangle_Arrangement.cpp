#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n;
    cin >> n;
    
    int max_w = 0, max_h = 0;
    for (int i = 0; i < n; i++) {
        int w, h;
        cin >> w >> h;
        max_w = max(max_w, w);
        max_h = max(max_h, h);
    }
    
    cout << 2 * (max_w + max_h) << "\n";
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