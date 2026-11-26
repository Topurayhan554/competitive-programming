#include <iostream>

using namespace std;

void solve() {
    long long x;
    cin >> x;

    int k = 0;
    while (x % 2 == 0) {
        x /= 2;
        ++k;
    }

    if (k != 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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
