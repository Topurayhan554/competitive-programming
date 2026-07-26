#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long n, k;
    cin >> n >> k;
    
    if (n == k) {
        cout << 0 << "\n";
        return;
    }
    if (k > n) {
        cout << -1 << "\n";
        return;
    }
    
    vector<long long> current = {n};
    int steps = 0;
    
    while (!current.empty()) {
        bool all_less = true;
        
        for (long long x : current) {
            if (x == k) {
                cout << steps << "\n";
                return;
            }
            if (x > k) {
                all_less = false;
            }
        }
        
        if (all_less) {
            cout << -1 << "\n";
            return;
        }
        
        steps++;
        set<long long> next_set;
        
        for (long long x : current) {
            if (x > k) { 
                next_set.insert(x / 2);
                next_set.insert((x + 1) / 2);
            }
        }
        
        current.assign(next_set.begin(), next_set.end());
    }
    
    cout << -1 << "\n";
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