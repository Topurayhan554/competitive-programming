#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int x0, y0, r;
    cin >> x0 >> y0 >> r;
    cout << x0 + r << " " << y0 << "\n";
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