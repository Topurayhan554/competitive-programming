#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;

    if (3 * a <= b) {
        cout << n * a << "\n";
    } 
    else {
        long long full_groups = n / 3;
        long long remaining_students = n % 3;
        
        long long total_cost = full_groups * b;

        if (remaining_students == 1) {
            total_cost += min(a, b);
        } else if (remaining_students == 2) {
            total_cost += min(2 * a, b);
        }

        cout << total_cost << "\n";
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