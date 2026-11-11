#include <bits/stdc++.h>

using namespace std;

void solve() {
    int b, c, h;
    cin >> b >> c >> h;
    cout << 2 * min(b - 1, c + h) + 1 << "\n";
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
