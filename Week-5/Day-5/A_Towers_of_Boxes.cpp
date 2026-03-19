#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, m, d;
    cin >> n >> m >> d;

    int max_boxes_per_tower = (d / m) + 1;

    int ans = (n + max_boxes_per_tower - 1) / max_boxes_per_tower;

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}