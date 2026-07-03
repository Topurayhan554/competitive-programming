#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long c;
    cin >> n >> c;
    
    vector<long long> a(n), b(n);
    long long sum_a = 0, sum_b = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
    
  
    bool can_no_reorder = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            can_no_reorder = false;
            break;
        }
    }
    
    long long ans = -1;
    if (can_no_reorder) {
        ans = sum_a - sum_b;
    }
    
    
    vector<long long> sorted_a = a;
    vector<long long> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    
    bool can_reorder = true;
    for (int i = 0; i < n; i++) {
        if (sorted_a[i] < sorted_b[i]) {
            can_reorder = false;
            break;
        }
    }
    
    if (can_reorder) {
        long long reorder_cost = c + (sum_a - sum_b);
        if (ans == -1 || reorder_cost < ans) {
            ans = reorder_cost;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}