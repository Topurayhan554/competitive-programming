#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (k < n || k > 2 * n - 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    
    long long f = k - n;
    
    if (f == 0) {
        for (long long i = 1; i <= n; i++) {
            cout << i << " " << i << (i == n ? "" : " ");
        }
        cout << "\n";
        return;
    }

    long long m = f + 1;
    vector<long long> ans;
    
    ans.push_back(1);
    ans.push_back(2);
    
    for (long long i = 3; i <= m; i++) {
        ans.push_back(i);
        ans.push_back(i - 2);
    }
    
    ans.push_back(m - 1);
    ans.push_back(m);
    
    for (long long i = m + 1; i <= n; i++) {
        ans.push_back(i);
        ans.push_back(i);
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
    }
    cout << "\n";
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