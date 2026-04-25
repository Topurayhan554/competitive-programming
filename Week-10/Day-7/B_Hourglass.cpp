#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long s, k, m;
    cin >> s >> k >> m;
    
    long long q = m / k;
    
    long long r = m % k;
    
    long long x_q = (q % 2 == 0) ? s : min(s, k);
    
    long long ans = max(0LL, x_q - r);
    
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