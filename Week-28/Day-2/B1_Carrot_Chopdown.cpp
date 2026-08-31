#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> freq(m + 2, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }
    
    vector<int> suf(m + 2, 0);
    for (int i = m; i >= 1; i--) {
        suf[i] = suf[i + 1] + freq[i];
    }
    
    int ans = 0;
    // Test all possible target lengths y
    for (int y = 1; y <= m; y++) {
        int current = suf[y];
        
        if (2 * y <= m) {
            current += freq[2 * y];
        }
        
        ans = max(ans, current);
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