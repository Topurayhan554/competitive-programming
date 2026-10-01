#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int ones = 0;
    for (int i = 0; i < 2 * n; ++i) {
        int a;
        cin >> a;
        ones += a;
    }
    
    int min_on = ones % 2;
    
    int max_on = min(ones, 2 * n - ones);
    
    cout << min_on << " " << max_on << "\n";
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