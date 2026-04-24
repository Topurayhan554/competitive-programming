#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, y, r;
    if (!(cin >> n)) return;
    cin >> y >> r;

    int suspended_by_red = r;

    int remaining_players = n - r;

    int suspended_by_yellow = y / 2;

    int total_suspended = suspended_by_red + min(remaining_players, suspended_by_yellow);

    cout << total_suspended << endl;
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