#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int total_cost = 0;
    int num_farms = n / k;
    
    for (int i = 0; i < num_farms; ++i) {
        bool has_zero = false;
        for (int j = 0; j < k; ++j) {
            if (s[i * k + j] == '0') {
                has_zero = true;
                break;
            }
        }
        
        if (!has_zero) {
            total_cost++;
        }
    }
    
    cout << total_cost << "\n";
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