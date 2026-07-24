#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(m);
    bool strictly_increasing = true;
    
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
        if (i > 0 && a[i - 1] >= a[i]) {
            strictly_increasing = false;
        }
    }
    
    if (strictly_increasing) {
        cout << n - a[m - 1] + 1 << "\n";
    } else {
        cout << 1 << "\n";
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