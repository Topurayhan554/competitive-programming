#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int g = __gcd(a, b);
        int lcm = a / g * b;

        cout << lcm << '\n';
    }

    return 0;
}