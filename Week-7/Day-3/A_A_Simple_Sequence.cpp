#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    for (int i = n; i >= 1; --i) {
        cout << i << (i == 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}