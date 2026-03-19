#include <bits/stdc++.h>
using namespace std; 

void solve() {
    string x;
    cin >> x;

    long long current_sum = 0;
    for (char c : x) {
        current_sum += (c - '0');
    }

    if (current_sum <= 9) {
        cout << 0 << endl;
        return;
    }

    vector<int> reductions;
    for (int i = 0; i < x.length(); ++i) {
        int digit = x[i] - '0';
        if (i == 0) {
            reductions.push_back(digit - 1);
        } else {
            reductions.push_back(digit);
        }
    }

    sort(reductions.rbegin(), reductions.rend());

    int moves = 0;
    for (int red : reductions) {
        current_sum -= red;
        moves++;
        if (current_sum <= 9) {
            break;
        }
    }

    cout << moves << endl;
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