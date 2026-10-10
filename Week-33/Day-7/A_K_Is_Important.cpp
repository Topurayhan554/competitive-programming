#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    
    long long len = n - k + 1;
    
    long long sum_prefix = pref[len];
    
    long long sum_suffix = pref[n] - pref[n - len];
    
    long long ans = max(sum_prefix, sum_suffix);
    cout << ans << "\n";
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