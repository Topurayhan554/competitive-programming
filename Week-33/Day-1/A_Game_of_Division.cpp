#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    vector<int> remainder_count(k, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        remainder_count[a[i] % k]++;
    }
    
    for (int i = 0; i < n; ++i) {
        if (remainder_count[a[i] % k] == 1) {
            cout << "YES\n" << (i + 1) << "\n";
            return;
        }
    }
    
    cout << "NO\n";
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