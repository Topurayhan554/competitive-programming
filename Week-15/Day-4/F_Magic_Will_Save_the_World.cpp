#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long w, f;
    cin >> w >> f;
    
    int n;
    cin >> n;
    
    vector<int> s(n);
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        total_sum += s[i];
    }

    vector<bool> dp(total_sum + 1, false);
    dp[0] = true;

    for (int x : s) {
        for (int j = total_sum; j >= x; --j) {
            if (dp[j - x]) {
                dp[j] = true;
            }
        }
    }

    long long min_time = 2e18;

    for (int sw = 0; sw <= total_sum; ++sw) {
        if (dp[sw]) {
            long long sf = total_sum - sw;
            
            long long time_w = (sw + w - 1) / w; 
            long long time_f = (sf + f - 1) / f;
            
            long long current_time = max(time_w, time_f);
            
            min_time = min(min_time, current_time);
        }
    }

    cout << min_time << "\n";
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