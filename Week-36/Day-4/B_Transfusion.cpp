#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
void solve() {
    int n;
    cin >> n;
    
    ll sum_odd = 0, sum_even = 0;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        if (i % 2 == 0) {
            sum_odd += a; 
        } else {
            sum_even += a; 
        }
    }

    ll count_odd = (n + 1) / 2;
    ll count_even = n / 2;

    if (sum_odd % count_odd != 0 || sum_even % count_even != 0) {
        cout << "NO\n";
        return;
    }

    ll target_odd = sum_odd / count_odd;
    ll target_even = sum_even / count_even;

    if (target_odd == target_even) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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