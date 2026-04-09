#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    int p;
    cin >> p;
    
    int x = a[p];
    
    vector<int> s(n + 2, 0); 
    for (int i = 1; i <= n; ++i) {
        s[i] = (a[i] == x ? 0 : 1);
    }

    int L = 0;
    for (int i = 1; i <= p; ++i) {
        if (s[i] != s[i - 1]) {
            L++;
        }
    }
    
    int R = 0;
    for (int i = p; i <= n; ++i) {
        if (s[i] != s[i + 1]) {
            R++;
        }
    }
    cout << max(L, R) << "\n";
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