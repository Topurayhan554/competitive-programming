#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }

    long long max_sum = 0;

    for (int x = 0; x <= k; ++x) {
        int left_removed = 2 * x;
        int right_removed = k - x;

        long long left_sum = pref[left_removed];
        
        long long right_sum = pref[n] - pref[n - right_removed];

        long long current_sum = pref[n] - (left_sum + right_sum);

        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";
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