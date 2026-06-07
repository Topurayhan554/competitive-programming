#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    if (n <= 3) {
        cout << 1 << "\n";
    } else {
        long long dist = abs(x1 - x2);
        long long a = min(dist, n - dist);
        
        cout << a + k << "\n";
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