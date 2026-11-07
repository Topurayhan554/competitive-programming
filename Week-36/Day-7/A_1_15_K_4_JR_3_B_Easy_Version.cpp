#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = (n / 2) * ((n + 1) / 2);
        cout << ans << '\n';
    }

    return 0;
}