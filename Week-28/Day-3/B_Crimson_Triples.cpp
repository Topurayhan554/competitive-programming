#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long ans = 0;
    
    for (int b = 1; b <= n; ++b) {
        long long multiples = n / b;
        ans += multiples * multiples;
    }
    
    cout << ans << "\n";
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