#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    long long x;
    cin >> x;

    if (n == 1) {
        if (a[0] == x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }

    bool possible = false;
    for (int i = 0; i < n - 1; ++i) {
        if (x >= min(a[i], a[i + 1]) && x <= max(a[i], a[i + 1])) {
            possible = true;
            break;
        }
    }

    if (possible) {
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