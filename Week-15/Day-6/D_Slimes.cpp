#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1);
    vector<long long> P(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        P[i] = P[i - 1] + a[i];
    }

    vector<int> prev_diff(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (a[i] != a[i - 1]) {
            prev_diff[i] = i - 1;
        } else {
            prev_diff[i] = prev_diff[i - 1];
        }
    }

    vector<int> next_diff(n + 2, n + 1);
    for (int i = n - 1; i >= 1; --i) {
        if (a[i] != a[i + 1]) {
            next_diff[i] = i + 1;
        } else {
            next_diff[i] = next_diff[i + 1];
        }
    }

    vector<int> ans(n + 1, -1);
    
    for (int i = 1; i <= n; ++i) {
        int min_dist = n + 1;

        if (i > 1) {
            if (a[i - 1] > a[i]) {
                min_dist = min(min_dist, 1);
            } else {
                int p = prev_diff[i - 1];
                long long target = P[i - 1] - a[i];
                
                auto it = lower_bound(P.begin(), P.begin() + i, target);
                int idx = (it - P.begin()) - 1;
                
                if (idx >= 0) {
                    int L_sum = idx + 1;
                    int L = min(L_sum, p);
                    if (L >= 1) {
                        min_dist = min(min_dist, i - L);
                    }
                }
            }
        }

        if (i < n) {
            if (a[i + 1] > a[i]) {
                min_dist = min(min_dist, 1);
            } else {
                int q = next_diff[i + 1];
                long long target = P[i] + a[i];

                auto it = upper_bound(P.begin() + i + 1, P.begin() + n + 1, target);
                
                if (it != P.begin() + n + 1) {
                    int R_sum = it - P.begin();
                    int R = max(R_sum, q);
                    if (R <= n) {
                        min_dist = min(min_dist, R - i);
                    }
                }
            }
        }

        ans[i] = (min_dist == n + 1) ? -1 : min_dist;
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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