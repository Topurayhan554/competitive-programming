#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    ll S = 0;
    ll max_delta = -1e18;

    for (int i = 0; i < n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;

        S += (b - 1) * a;
        
        ll delta = (b * a) - c;
        if (delta > max_delta) {
            max_delta = delta;
        }
    }

    if (S >= x) {
        cout << 0 << "\n";
        return;
    }

    if (max_delta <= 0) {
        cout << -1 << "\n";
        return;
    }

    ll rem = x - S;
    ll rollbacks = (rem + max_delta - 1) / max_delta;
    
    cout << rollbacks << "\n";
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