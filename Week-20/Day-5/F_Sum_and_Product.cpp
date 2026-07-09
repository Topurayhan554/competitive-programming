#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    
    map<ll, ll> freq;
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        freq[a]++;
    }
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        ll x, y;
        cin >> x >> y;
        
        ll D = x * x - 4 * y;
        
        if (D < 0) {
            cout << 0 << " ";
            continue;
        }
        
        ll d = round(sqrt(static_cast<long double>(D)));
        
        if (d * d != D) {
            cout << 0 << " ";
            continue;
        }
        
        if ((x - d) % 2 != 0) {
            cout << 0 << " ";
            continue;
        }
        
        ll v1 = (x - d) / 2;
        ll v2 = (x + d) / 2;
        
        if (v1 == v2) {
            ll c = freq[v1];
            cout << c * (c - 1) / 2 << " ";
        } else {
            cout << freq[v1] * freq[v2] << " ";
        }
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