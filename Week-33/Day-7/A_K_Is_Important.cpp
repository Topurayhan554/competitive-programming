#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<long long> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    int len = k - 1;
    if (len == 0) {
        cout << total_sum << "\n";
        return;
    }

    long long current_window_sum = 0;
    for (int i = 0; i < len; ++i) {
        current_window_sum += a[i];
    }

    long long min_window_sum = current_window_sum;
    for (int i = len; i < n; ++i) {
        current_window_sum += a[i] - a[i - len];
        min_window_sum = min(min_window_sum, current_window_sum);
    }

    cout << total_sum - min_window_sum << "\n";
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