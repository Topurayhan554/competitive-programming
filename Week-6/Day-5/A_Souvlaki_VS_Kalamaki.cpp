#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n;
    if (!(cin >> n)) return;

    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        freq[val]++;
    }

    int total_pairs = 0;
    for (auto const& [val, count] : freq) {
        total_pairs += count / 2;
    }

    int even_rounds = (n - 1) / 2;

    if (total_pairs >= even_rounds) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}