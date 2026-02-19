#include <bits/stdc++.h>
using namespace std; 

int get_root(int n) {
    while (n > 0 && n % 2 == 0) {
        n /= 2;
    }
    return n;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    bool possible = true;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        if (get_root(i) != get_root(a[i])) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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