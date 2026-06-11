#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    long long time1 = (n + x + y - 1) / (x + y);

    long long time2 = 0;
    long long lines_during_setup = z * x;

    if (n <= lines_during_setup) {
        time2 = (n + x - 1) / x;
    } else {
        long long remaining_lines = n - lines_during_setup;
        long long new_speed = x + 10 * y;
        time2 = z + (remaining_lines + new_speed - 1)
    }

    cout << min(time1, time2) << "\n";
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