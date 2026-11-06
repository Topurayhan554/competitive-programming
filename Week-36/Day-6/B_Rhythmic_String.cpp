#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<long long> unique_a(a.begin(), a.end());
    int max_kept = 0;

    for (long long p : unique_a) {
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] % p == 0) {
                count++;
            }
        }
        max_kept = max(max_kept, count);
    }

    cout << n - max_kept << "\n";
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