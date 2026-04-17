#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    if (!(cin >> n)) return;

    set<long long> distinct_colors;
    for (int i = 0; i < n; ++i) {
        long long color;
        cin >> color;
        distinct_colors.insert(color);
    }

    long long target = 1000000000000000000LL;
    long long current_pos = n + 1;

    while (current_pos <= target) {
        long long current_distinct_count = distinct_colors.size();

        if (distinct_colors.count(current_distinct_count)) {
            cout << current_distinct_count << endl;
            return;
        }

        distinct_colors.insert(current_distinct_count);

        if (current_pos == target) {
            cout << current_distinct_count << endl;
            return;
        }

        current_pos++;
        
        if (current_pos > n + 2000) {
            cout << distinct_colors.size() << endl;
            return;
        }
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