#include <bits/stdc++.h>
using namespace std; 

void solve() {

    long long l, a, b;
    if (!(cin >> l >> a >> b)) return;

    long long g = __gcd(b, l);
    long long max_prize = (l - 1) - ((l - 1 - a) % g);

    cout << max_prize << "\n";
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