#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    set<long long> prefix_sums;
    prefix_sums.insert(0);
    
    long long current_prefix_sum = 0;
    bool found = false;
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            current_prefix_sum -= a[i];
        } else {
            current_prefix_sum += a[i];
        }
        
        if (prefix_sums.count(current_prefix_sum)) {
            found = true;
            break;
        }
        
        prefix_sums.insert(current_prefix_sum);
    }
    
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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