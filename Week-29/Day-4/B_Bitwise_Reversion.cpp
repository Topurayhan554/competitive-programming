#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, z;
    cin >> x >> y >> z;
    
    if (((x & y) | (y & z) | (z & x)) == (x & y & z)) {
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