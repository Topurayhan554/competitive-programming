#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    
    long long current_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (current_sum + a[i] <= k) {
            current_sum += a[i];
        } else {
            break;
        }
    }
    
    cout << k - current_sum << "\n";
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