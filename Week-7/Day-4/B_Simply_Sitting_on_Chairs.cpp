#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> p(n + 1);
    vector<int> impact(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        if (p[i] > i) {
            impact[p[i]]++;
        }
    }

    int current_subtraction = 0;
    int max_chairs = 0;

    for (int L = 1; L <= n; ++L) {
        current_subtraction += impact[L];
        max_chairs = max(max_chairs, L - current_subtraction);
    }

    cout << max_chairs << "\n";
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