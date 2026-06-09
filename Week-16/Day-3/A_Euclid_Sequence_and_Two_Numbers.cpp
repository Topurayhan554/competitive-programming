#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    bool possible = true;
    for (int i = 0; i < n - 2; i++) {
        if (b[i] % b[i+1] != b[i+2]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << b[0] << " " << b[1] << "\n";
    } else {
        cout << -1 << "\n";
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