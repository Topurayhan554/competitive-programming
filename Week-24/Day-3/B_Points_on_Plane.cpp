#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long k = sqrt(n);
    
    while (k * k < n) {
        k++;
    }
    
    while ((k - 1) * (k - 1) >= n) {
        k--;
    }
    
    cout << k - 1 << "\n";
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