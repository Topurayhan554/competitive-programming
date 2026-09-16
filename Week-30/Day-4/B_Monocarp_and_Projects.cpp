#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll d = y - x;
    ll L = x;
    ll R = x + k - 1;

    unsigned long long total_sum = 0;

    ll part1_end = min(R, d);

    for (ll n = L; n <= part1_end; ++n) {
        total_sum += d % n;
    }

    ll part2_start = max(L, d + 1);

    if (part2_start <= R) {
        unsigned long long count = R - part2_start + 1;
        total_sum += count * (unsigned long long)d;
    }

    cout << total_sum << '\n';
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