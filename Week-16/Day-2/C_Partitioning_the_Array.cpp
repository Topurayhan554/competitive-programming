#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    
    for (int k = 1; k * k <= n; k++) {
        if (n % k == 0) {
            
            int g1 = 0;
            for (int i = 0; i + k < n; i++) {
                g1 = __gcd(g1, abs(a[i + k] - a[i]));
            }
            if (g1 != 1) {
                ans++;
            }

            if (k * k != n) {
                int k2 = n / k;
                int g2 = 0;
                for (int i = 0; i + k2 < n; i++) {
                    g2 = __gcd(g2, abs(a[i + k2] - a[i]));
                }
                if (g2 != 1) {
                    ans++;
                }
            }
        }
    }
    
    cout << ans << "\n";
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