#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long max_money = (k - 1) * 2LL + (1LL << (n - k + 1));
    
    cout << max_money << "\n";
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