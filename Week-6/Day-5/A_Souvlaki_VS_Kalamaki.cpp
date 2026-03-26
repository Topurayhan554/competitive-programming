#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++;
    }

    int total_pairs = 0;
    for (auto const& [val, freq] : counts) {
        total_pairs += freq / 2;
    }

    int kalamaki_rounds = (n - 1) / 2;

    if (total_pairs >= kalamaki_rounds) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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