#include <bits/stdc++.h>
using namespace std; 

long long get_digit_sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    long long x;
    cin >> x;

    if (x % 9 != 0) {
        cout << 0 << endl;
        return;
    }

    int count = 0;
    for (int s = 1; s <= 100; s++) {
        long long y = x + s;
        if (get_digit_sum(y) == s) {
            count++;
        }
    }

    cout << count << endl;
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