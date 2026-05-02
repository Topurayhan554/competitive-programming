#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    vector<int> v6, v2, v3, v1;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (x % 6 == 0) {
            v6.push_back(x);
        } else if (x % 2 == 0) {
            v2.push_back(x);
        } else if (x % 3 == 0) {
            v3.push_back(x);
        } else {
            v1.push_back(x);
        }
    }
    
    for (int x : v6) cout << x << " ";
    for (int x : v2) cout << x << " ";
    for (int x : v1) cout << x << " ";
    for (int x : v3) cout << x << " ";
    
    cout << "\n";
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