#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        if (k % 2 == 1) {
            int oddA = 0, oddB = 0;
            for (int x : a) oddA += (x % 2 != 0);
            for (int x : b) oddB += (x % 2 != 0);

            cout << (oddA <= oddB ? "YES\n" : "NO\n");
        } else {
            int evenA = 0, evenB = 0;
            for (int x : a) evenA += (x % 2 == 0);
            for (int x : b) evenB += (x % 2 == 0);

            cout << (evenA <= evenB ? "YES\n" : "NO\n");
        }
    }

    return 0;
}