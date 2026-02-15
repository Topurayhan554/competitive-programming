#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool has_zero = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            has_zero = true;
        }
    }

    if (!has_zero) {
        cout << "Alice" << endl;
        return;
    }

    if (n == 2) {
        cout << "Bob" << endl;
        return;
    }

    if (a[0] == 1 || a[n - 1] == 1) {
        cout << "Alice" << endl;
    }
    else {
        cout << "Bob" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}