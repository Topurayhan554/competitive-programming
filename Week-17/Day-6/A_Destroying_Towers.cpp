#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long total_sum = 0;
    int current_min = 1e9;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        current_min = min(current_min, a);
        total_sum += current_min;
    }
    
    cout << total_sum << "\n";
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