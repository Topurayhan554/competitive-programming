#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    int m = 1; 
    long long start_val = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1] + 1 || a[i] <= start_val) {
            m++;
            start_val = a[i]; 
        }
    }

    cout << m << endl;
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