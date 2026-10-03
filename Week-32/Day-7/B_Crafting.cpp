#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    int neg_count = 0;
    int neg_idx = -1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            neg_count++;
            neg_idx = i;
        }
    }
    
    if (neg_count == 0) {
        cout << "YES\n";
    } else if (neg_count > 1) {
        cout << "NO\n";
    } else {
        long long req = b[neg_idx] - a[neg_idx];
        long long min_other_excess = 2e18;
        
        for (int i = 0; i < n; i++) {
            if (i != neg_idx) {
                min_other_excess = min(min_other_excess, a[i] - b[i]);
            }
        }
        
        if (req <= min_other_excess) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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