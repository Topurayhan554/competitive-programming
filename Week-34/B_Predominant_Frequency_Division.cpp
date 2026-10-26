#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> pref1(n + 1, 0), pref3(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pref1[i + 1] = pref1[i] + (a[i] == 1);
        pref3[i + 1] = pref3[i] + (a[i] == 3);
    }

    vector<int> val(n);
    for (int j = 1; j < n; ++j) {
        val[j] = 2 * pref3[j] - j;
    }

    vector<int> suff_min(n);
    suff_min[n - 1] = val[n - 1];
    for (int j = n - 2; j >= 1; --j) {
        suff_min[j] = min(val[j], suff_min[j + 1]);
    }

    bool possible = false;
    for (int i = 1; i <= n - 2; ++i) {
        if (2 * pref1[i] >= i) {
            int left_val = 2 * pref3[i] - i;
            if (left_val >= suff_min[i + 1]) {
                possible = true;
                break;
            }
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
