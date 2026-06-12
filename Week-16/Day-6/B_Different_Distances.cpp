#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    if (n == 2) {
        cout << "1 2 1 2 2 1 1 2\n";
        return;
    }
    
    for (int j = 0; j < n; ++j) {
        cout << j + 1 << " ";
    }
    
    for (int j = 0; j < n; ++j) {
        cout << j + 1 << " ";
    }

    for (int j = 0; j < n; ++j) {
        cout << (j - 1 + n) % n + 1 << " ";
    }
    
    for (int j = 0; j < n; ++j) {
        cout << (j - 3 + 2 * n) % n + 1 << " ";
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