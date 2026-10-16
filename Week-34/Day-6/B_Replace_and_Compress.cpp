#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    int L0 = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) {
            L0++;
        }
    }
    
    bool has_plus_2 = false;
    bool has_minus_2 = false;
    
    for (int i = 1; i <= n - 2; ++i) {
        if (s[i-1] == s[i] && s[i] == s[i+1]) {
            has_plus_2 = true;
        } else if (s[i-1] == s[i+1] && s[i] != s[i-1]) {
            has_minus_2 = true;
        }
    }
    
    int ans = 1;
    if (has_plus_2) ans++;
    if (has_minus_2) ans++;
    
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