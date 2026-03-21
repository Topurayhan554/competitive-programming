#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string s_max = s;
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 1; i < n - 1; ++i) {
            if (s_max[i] == '0' && s_max[i - 1] == '1' && s_max[i + 1] == '1') {
                s_max[i] = '1';
                changed = true;
            }
        }
    }

    int total_max_ones = 0;
    for (char c : s_max) {
        if (c == '1') total_max_ones++;
    }

    vector<int> toggleable_indices;
    for (int i = 1; i < n - 1; i++) {
        if (s_max[i - 1] == '1' && s_max[i + 1] == '1') {
            toggleable_indices.push_back(i);
        }
    }

    int max_zeros_we_can_make = 0;
    if (!toggleable_indices.empty()) {
        int current_k = 1;
        for (size_t i = 1; i < toggleable_indices.size(); i++) {
            if (toggleable_indices[i] == toggleable_indices[i - 1] + 1) {
                current_k++;
            } else {
                max_zeros_we_can_make += (current_k + 1) / 2;
                current_k = 1;
            }
        }
        max_zeros_we_can_make += (current_k + 1) / 2;
    }
    cout << total_max_ones - max_zeros_we_can_make << " " << total_max_ones << endl;
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