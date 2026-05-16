#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    ll c;
    cin >> n >> c;

    vector<ll> s(n);
    ll cnt_even = 0;
    ll cnt_odd = 0;

    ll total_pairs = (c + 1) * (c + 2) / 2;

    ll minus_sum = 0;
    ll minus_diff = 0;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        
        if (s[i] % 2 == 0) {
            cnt_even++;
        } else {
            cnt_odd++;
        }

        minus_sum += (s[i] / 2) + 1;

        minus_diff += (c - s[i] + 1);
    }

    ll intersection = (cnt_even * (cnt_even + 1)) / 2 +
                      (cnt_odd * (cnt_odd + 1)) / 2;

    ll ans = total_pairs - minus_sum - minus_diff + intersection;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}