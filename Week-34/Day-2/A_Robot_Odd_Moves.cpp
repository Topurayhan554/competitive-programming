#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a, b;
    cin >> a >> b;
    
    if ((a % 2 == b % 2) && (b <= a)) {
        cout << a << "\n";
    } 
    else if ((a % 2 != b % 2) && (b <= a + 1)) {
        cout << a + 1 << "\n";
    } 
    else {
        cout << -1 << "\n";
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