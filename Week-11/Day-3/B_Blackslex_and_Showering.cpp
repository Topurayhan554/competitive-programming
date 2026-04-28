#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long total_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        total_sum += abs(a[i] - a[i+1]);
    }

    long long max_reduction = abs(a[0] - a[1]);

    max_reduction = max(max_reduction, abs(a[n-1] - a[n-2]));

    for (int k = 1; k < n - 1; k++) {
        long long current_diff = abs(a[k-1] - a[k]) + abs(a[k] - a[k+1]);
        long long new_diff = abs(a[k-1] - a[k+1]);
        max_reduction = max(max_reduction, current_diff - new_diff);
    }

    cout << total_sum - max_reduction << "\n";
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