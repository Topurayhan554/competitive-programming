#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int odd_count = 0;
    int evens_0_mod_4 = 0;
    int evens_2_mod_4 = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (x % 2 != 0) {
            odd_count++;
        } else {
            if (x % 4 == 0) {
                evens_0_mod_4++;
            } else {
                evens_2_mod_4++;
            }
        }
    }
    
    cout << max({odd_count, evens_0_mod_4, evens_2_mod_4}) << "\n";
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