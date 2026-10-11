#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int m = n - 4;
    vector<ll> V(m);
    map<ll, ll> freq;
    
    for (int i = 0; i < m; ++i) {
        V[i] = a[i] + a[i+2] - a[i+4];
        freq[V[i]]++;
    }
    
    ll total_pairs = 0;
    for (auto& p : freq) {
        ll c = p.second;
        total_pairs += c * (c - 1) / 2;
    }
    
    ll invalid_diff2 = 0;
    for (int i = 0; i + 2 < m; ++i) {
        if (V[i] == V[i+2]) {
            invalid_diff2++;
        }
    }
    
    ll invalid_diff4 = 0;
    for (int i = 0; i + 4 < m; ++i) {
        if (V[i] == V[i+4]) {
            invalid_diff4++;
        }
    }
    
    ll ans = total_pairs - invalid_diff2 - invalid_diff4;
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