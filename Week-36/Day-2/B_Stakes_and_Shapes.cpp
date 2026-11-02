#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, z;
    cin >> x >> y >> z;
    
    long long n = x + y + z;
    
    if (y >= z) {
        cout << string(n, 'R') << "\n";
    } else if (z >= x) {
        cout << string(n, 'S') << "\n";
    } else {
        cout << string(n, 'P') << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}