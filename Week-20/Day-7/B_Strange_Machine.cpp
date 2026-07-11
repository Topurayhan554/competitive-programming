#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    
    bool has_B = false;
    for (char c : s) {
        if (c == 'B') {
            has_B = true;
            break;
        }
    }
    
    for (int i = 0; i < q; ++i) {
        long long a;
        cin >> a;
        
        if (!has_B) {
            cout << a << "\n";
        } else {
            long long ans = 0;
            int idx = 0;
            while (a > 0) {
                if (s[idx] == 'A') {
                    a--;
                } else {
                    a /= 2;
                }
                ans++;
                idx++;
                if (idx == n) {
                    idx = 0;
                }
            }
            cout << ans << "\n";
        }
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