#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.rbegin(), a.rend());

    long long max_score = 0;
    long long total_strikes_needed = 0;

    for (int k = 1; k <= n; k++) {
        total_strikes_needed += b[k - 1];

        if (total_strikes_needed > n) {
            break;
        }
        long long current_difficulty = a[total_strikes_needed - 1];
        long long current_score = current_difficulty * k;

        if (current_score > max_score) {
            max_score = current_score;
        }
    }

    cout << max_score << "\n";
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