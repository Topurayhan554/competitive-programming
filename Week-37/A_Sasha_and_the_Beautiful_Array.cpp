#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int min_val = 2e9 + 7, max_val = -1;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < min_val) min_val = x;
        if (x > max_val) max_val = x;
    }
    cout << max_val - min_val << "\n";
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
