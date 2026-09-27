#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        counts[x]++;
    }

    vector<int> result;
    while (!counts.empty()) {
        vector<int> to_remove;
        for (auto it = counts.rbegin(); it != counts.rend(); ++it) {
            result.push_back(it->first);
            it->second--;
            if (it->second == 0) {
                to_remove.push_back(it->first);
            }
        }
        for (int x : to_remove) {
            counts.erase(x);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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