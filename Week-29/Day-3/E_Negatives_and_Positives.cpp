#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    long long total_sum = 0;
    long long min_abs = 2e9 + 7;
    int neg_count = 0;
    
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        
        if (x < 0) {
            neg_count++;
        }
        
        total_sum += abs(x);
        min_abs = min(min_abs, abs(x));
    }
    
    if (neg_count % 2 != 0) {
        total_sum -= 2 * min_abs;
    }
    
    cout << total_sum << "\n";
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