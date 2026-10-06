#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int k, q;
    cin >> k >> q;
    
    vector<int> a(k);
    for (int i = 0; i < k; ++i) {
        cin >> a[i];
    }
    
    int a1 = a[0];
    
    for (int i = 0; i < q; ++i) {
        int n;
        cin >> n;
        cout << min(n, a1 - 1) << (i == q - 1 ? "" : " ");
    }
    cout << "\n";
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