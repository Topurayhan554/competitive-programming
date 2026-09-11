#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int zero_count = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            zero_count++;
        }
    }
    
    if (zero_count < 2) {
        cout << -1 << "\n";
        return;
    }
    
    int operations = 0;
    if (a[0] == 1) {
        operations++;
    }
    if (a[n - 1] == 1) {
        operations++;
    }
    
    cout << operations << "\n";
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