#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int x;
    cin >> x;

    for (int k = 1; ; ++k) {
        int max_dmg = 0;
        for (int c = 0; c < k; ++c) {
            int a = k - c;
            int dmg = 0;
            int power = c + 1;
            for (int i = 0; i < a; ++i) {
                dmg += power;
                if (power > 1) {
                    power--;
                }
            }
            max_dmg = max(max_dmg, dmg);
        }
        if (max_dmg >= x) {
            cout << k << '\n';
            return;
        }
    }
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
