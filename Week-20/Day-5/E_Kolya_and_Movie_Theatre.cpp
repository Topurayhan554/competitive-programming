#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    ll d;
    cin >> n >> m >> d;
    
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    ll ans = 0;
    ll current_sum = 0;
    
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    
    for (ll i = 1; i <= n; i++) {
        ans = max(ans, current_sum + a[i] - d * i);
        
        if (a[i] > 0) {
            pq.push(a[i]);
            current_sum += a[i];
            
            if (pq.size() >= m) {
                current_sum -= pq.top();
                pq.pop();
            }
        }
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