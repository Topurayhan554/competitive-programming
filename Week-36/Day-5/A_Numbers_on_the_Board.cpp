#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        long long n = r - l + 1LL;
        long long total = n * (l + r) / 2;

        if (total == 0) {
            cout << 0 << '\n';
            continue;
        }

        long long k = 1;
        for (; k <= n; ++k) {
            long long minSum = k * (2LL * l + k - 1) / 2;
            long long maxSum = k * (2LL * r - k + 1) / 2;

            if (minSum <= total && total <= maxSum) break;
        }

        cout << k - 1 << '\n';
    }

    return 0;
}