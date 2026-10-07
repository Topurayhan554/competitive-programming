#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long original_k = k;
    long long sub = 0;
    long long wasted = 0;
    
    for (int i = 0; i < n; ++i) {
        long long diff = a[i] - sub;
        long long c = n - i;
        
        if (diff <= 0) {
            wasted++;
            continue;
        }
        
        if (k <= c * diff) {
            break;
        } else {
            k -= c * diff;
            sub += diff;
            wasted++; 
        }
    }
    
    cout << original_k + wasted << "\n";
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