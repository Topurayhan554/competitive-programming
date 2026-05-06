#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> res(n);
    res[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; --i) {
        if (res[i + 1] > 0) {
            res[i] = a[i] + res[i + 1];
        } else {
            res[i] = a[i];
        }
    }

    int positive_count = 0;
    for (int i = 0; i < n; ++i) {
        if (res[i] > 0) {
            positive_count++;
        }
    }
    
    cout << positive_count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}