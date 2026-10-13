#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long p = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if (i % 2 == 0) {
            p += a;
        } else {
            p -= a;
        }
    }
    cout << p << "\n";
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