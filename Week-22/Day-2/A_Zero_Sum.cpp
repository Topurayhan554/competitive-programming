#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int count_minus = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            count_minus++;
        }
    }
    
    if (n % 2 != 0) {
        cout << "NO\n";
    } else {
        if (count_minus % 2 == (n / 2) % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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