#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << "1 1\n";
        return;
    }
    
    for (int i = n - 1; i >= 1; --i) {
        cout << i << " ";
    }
    
    cout << n << " ";
    
    for (int i = 1; i <= n - 1; ++i) {
        cout << i << " ";
    }
    
    cout << n << "\n";
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