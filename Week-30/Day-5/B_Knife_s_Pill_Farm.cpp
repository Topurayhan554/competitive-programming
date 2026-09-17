#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    long long curr_sum = 0;
    priority_queue<long long> pq; 
    
    for (int i = 0; i < m - 1; ++i) {
        pq.push(a[i]);
        curr_sum += a[i];
    }
    
    long long max_score = (long long)m * a[m - 1] - curr_sum;
    
    for (int j = m; j < n; ++j) {
        if (m > 1) {
            pq.push(a[j - 1]);
            curr_sum += a[j - 1];
            
            curr_sum -= pq.top();
            pq.pop();
        }
        
        long long score = (long long)m * a[j] - curr_sum;
        if (score > max_score) {
            max_score = score;
        }
    }
    
    cout << max_score << "\n";
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