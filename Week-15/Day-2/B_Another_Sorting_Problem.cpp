#include <bits/stdc++.h>
using namespace std; 

const long long INF = 2000000000000000000LL;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long k_min = 0;
    long long max_so_far = a[0];
    for (int i = 1; i < n; i++) {
        if (max_so_far > a[i]) {
            k_min = max(k_min, max_so_far - a[i]);
        }
        max_so_far = max(max_so_far, a[i]);
    }

    if (k_min == 0) {
        cout << "YES\n";
        return;
    }

    long long dp = -INF;
    bool possible = true;
    
    for (int i = 0; i < n; i++) {
        long long choice1 = a[i];
        long long choice2 = a[i] + k_min;

        long long next_dp = INF;
        
        if (choice1 >= dp) {
            next_dp = min(next_dp, choice1);
        }
        if (choice2 >= dp) {
            next_dp = min(next_dp, choice2);
        }

        if (next_dp == INF) {
            possible = false;
            break;
        }
        
        dp = next_dp;
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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