#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> count(n + 1, 0);
    int max_freq = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        count[a]++;
        if (count[a] > max_freq) {
            max_freq = count[a];
        }
    }
    
    cout << n - max_freq << "\n";
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