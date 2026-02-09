#include <bits/stdc++.h>
using namespace std; 
void solve() {

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        c[i] = max(a[i], b[i]);
    }

    vector<int> suffix_max(n);
    suffix_max[n - 1] = c[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffix_max[i] = max(c[i], suffix_max[i + 1]);
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + suffix_max[i];
    }

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << (i == q - 1 ? "" : " ");
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