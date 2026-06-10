#include <bits/stdc++.h>
using namespace std; 
void solve(){
    long long n;
    cin >> n;

    long long rem = n % 12;
    long long a = -1;

    if (rem <= 9) {
        a = rem;
    } else if (rem == 10) {
        a = 22;
    } else if (rem == 11) {
        a = 11;
    }

    if (a <= n) {
        cout << a << " " << n - a << "\n";
    } else {
        cout << -1 << "\n";
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