#include <bits/stdc++.h>
using namespace std;

int maxPairs(const string& s) {
    int ans = 0, run = 0;
    for (char c : s) {
        if (c == 'f') {
            ++run;
        } else {
            ans += run / 2;
            run = 0;
        }
    }
    ans += run / 2;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string top, bottom;
        cin >> top >> bottom;

        int topCnt = 0, bottomCnt = 0;

        for (char c : top)
            if (c == 'f') ++topCnt;

        for (char c : bottom)
            if (c == 'f') ++bottomCnt;

        int delta = topCnt - bottomCnt;

        int topPairs = maxPairs(top);
        int bottomPairs = maxPairs(bottom);

        int low = -2 * bottomPairs;
        int high = 2 * topPairs;

        int ans;

        if (delta < low) {
            ans = low - delta;
        } else if (delta > high) {
            ans = delta - high;
        } else {
            ans = abs(delta) % 2;
        }

        cout << ans << '\n';
    }

    return 0;
}