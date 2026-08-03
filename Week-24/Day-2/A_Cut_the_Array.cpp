#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pref[i] = (pref[i - 1] + a[i]) % 3;
    }

    for (int l = 1; l < n - 1; ++l) {
        for (int r = l + 1; r < n; ++r) {
            int s1 = pref[l];
            int s2 = (pref[r] - pref[l] + 3) % 3;
            int s3 = (pref[n] - pref[r] + 3) % 3;

            bool all_equal = (s1 == s2 && s2 == s3);
            bool all_distinct = (s1 != s2 && s2 != s3 && s1 != s3);

            if (all_equal || all_distinct) {
                cout << l << " " << r << "\n";
                return;
            }
        }
    }

    cout << "0 0\n";
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