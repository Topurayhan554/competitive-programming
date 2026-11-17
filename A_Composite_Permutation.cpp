#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n <= 3) {
        cout << -1 << "\n";
        return;
    }
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) {
        p[i] = i;
    }
    swap(p[1], p[4]);
    for (int i = 1; i <= n; ++i) {
        cout << p[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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
