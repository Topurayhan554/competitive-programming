#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int first_1 = -1, last_1 = -1;
    int first_minus = -1, last_minus = -1;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first_1 == -1) first_1 = i;
            last_1 = i;
        } else if (a[i] == -1) {
            if (first_minus == -1) first_minus = i;
            last_minus = i;
        }
    }
    
    if (first_1 == -1) { 
        if (first_minus != -1) {
            a[first_minus] = 1;
            a[last_minus] = 1;
        }
    } else {
        if (first_minus != -1 && first_minus < first_1) {
            a[first_minus] = 1;
        }
        if (last_minus != -1 && last_minus > last_1) {
            a[last_minus] = 1;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == -1) {
            a[i] = 0;
        }
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
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