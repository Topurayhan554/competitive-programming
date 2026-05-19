#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count0 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            count0++;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < count0; ++i) {
        if (s[i] == '1') {
            ans++;
        }
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