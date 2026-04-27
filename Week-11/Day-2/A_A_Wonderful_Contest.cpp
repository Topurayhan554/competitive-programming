#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    bool has_100 = false;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 100) {
            has_100 = true;
        }
    }
    
    if (has_100) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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