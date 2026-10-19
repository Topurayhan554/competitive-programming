#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    map<int, int> freq;
    bool can_exchange = false;
    
    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        freq[c]++;
        if (freq[c] >= k) {
            can_exchange = true;
        }
    }
    
    if (can_exchange) {
        cout << k - 1 << "\n";
    } else {
        cout << n << "\n";
    }
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
