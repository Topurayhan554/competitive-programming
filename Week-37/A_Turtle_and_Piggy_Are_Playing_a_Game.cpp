#include <iostream>

using namespace std;

void solve() {
    long long l, r;
    cin >> l >> r;
    cout << __lg(r) << "\n";
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
