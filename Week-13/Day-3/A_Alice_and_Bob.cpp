#include <bits/stdc++.h>
using namespace std; 


void solve() {
    int n;
    long long a;
    if (!(cin >> n >> a)) return;
    
    vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    auto it_low = lower_bound(v.begin(), v.end(), a);
    auto it_high = upper_bound(v.begin(), v.end(), a);

    int L = distance(v.begin(), it_low);
    int R = distance(it_high, v.end());

    if (L == 0 && R == 0) {
        cout << 1337 << "\n";
    } else if (L >= R) {
        cout << *prev(it_low) << "\n";
    } else {
        
        cout << *it_high << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}