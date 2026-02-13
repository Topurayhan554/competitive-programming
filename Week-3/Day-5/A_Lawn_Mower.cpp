#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long n, w;
    cin >> n >> w;
    
    long long boards_to_keep = n / w;
    long long max_removed = n - boards_to_keep;

    cout << max_removed << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}