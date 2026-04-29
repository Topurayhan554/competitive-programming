#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    long long min_cost = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        if (a[i] >= 2) {
            min_cost += a[i];
        }
    }

    if (a[n - 1] == 1) {
        min_cost += 1;
    }
    
    cout << min_cost % 676767677 << "\n";
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