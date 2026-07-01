#include <bits/stdc++.h>
using namespace std; 

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    int non_zero_count = 0;
    ll S = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            non_zero_count++;
        }
        S ^= a[i];
    }

    if (non_zero_count <= 1) {
        cout << 0 << "\n";
        return;
    }

    ll ans = 0;

    if (S == 0) {
        ans++;
    }

    for (int i = 0; i < n; i++) {
        if ((S ^ a[i]) < a[i]) {
            ans++;
        }
    }

    cout << ans % 998244353 << "\n";
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