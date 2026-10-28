#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> cnt(n + 2, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a <= n + 1) {
            cnt[a]++;
        }
    }

    long long sum_cnt = 0;
    int ans = 0;
    for (int v = 0; v <= n + 1; ++v) {
        sum_cnt += cnt[v];
        if (cnt[v] < 1 || sum_cnt < (long long)(v + 1) * k) {
            break;
        }
        ans = v + 1;
    }
    cout << ans << "\n";
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