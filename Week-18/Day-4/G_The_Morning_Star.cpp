#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    map<ll, ll> count_x;
    map<ll, ll> count_y;
    map<ll, ll> count_diff;
    map<ll, ll> count_sum;

    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;

        count_x[x]++;
        count_y[y]++;
        count_diff[y - x]++;
        count_sum[y + x]++;
    }

    ll total_pairs = 0;

    for (auto const& [key, val] : count_x)
        total_pairs += val * (val - 1);

    for (auto const& [key, val] : count_y)
        total_pairs += val * (val - 1);

    for (auto const& [key, val] : count_diff)
        total_pairs += val * (val - 1);

    for (auto const& [key, val] : count_sum)
        total_pairs += val * (val - 1);

    cout << total_pairs << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}