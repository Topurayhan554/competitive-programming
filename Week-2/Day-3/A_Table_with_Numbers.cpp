#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    long long h, l;
    if (!(cin >> n >> h >> l)) return;

    int row_only = 0;
    int col_only = 0;
    int both = 0;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        
        bool is_valid_row = (val <= h);
        bool is_valid_col = (val <= l);

        if (is_valid_row && is_valid_col) {
            both++;
        }
        else if (is_valid_row) {
            row_only++;
        }
        else if (is_valid_col) {
            col_only++;
        }
    }

    int total_pairs = 0;
    int matched_strict = min(row_only, col_only);
    total_pairs += matched_strict;

    int rem_row = row_only - matched_strict;
    int rem_col = col_only - matched_strict;

    if (rem_row > 0) {
        int taken = min(rem_row, both);
        total_pairs += taken;
        both -= taken;
    }

    if (rem_col > 0) {
        int taken = min(rem_col, both);
        total_pairs += taken;
        both -= taken;
    }

    total_pairs += both / 2;

    cout << total_pairs << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}