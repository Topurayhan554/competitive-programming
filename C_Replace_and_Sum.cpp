#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;

    vector<long long> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<long long> c(n + 1);
    for (int i = 1; i <= n; i++) {
        c[i] = max(a[i], b[i]);
    }

    vector<long long> M(n + 1);
    long long current_max = 0;
    for (int i = n; i >= 1; --i) {
        current_max = max(current_max, c[i]);
        M[i] = current_max;
    }
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + M[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << (i == q - 1 ? "" : " ");
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