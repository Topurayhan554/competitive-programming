#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long n, x, y, z;
    cin >> n >> x >> y >> z;
    
    long long no_ai = (n + x + y - 1) / (x + y);
    
    long long with_ai;
    if (z * x >= n) {
        with_ai = (n + x - 1) / x;
    } else {
        long long rem_lines = n - z * x;
        long long new_speed = x + 10 * y;
        with_ai = z + (rem_lines + new_speed - 1) / new_speed;
    }
    
    cout << min(no_ai, with_ai) << "\n";
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