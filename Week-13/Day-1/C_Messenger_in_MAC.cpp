#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long l;
    cin >> n >> l;
    
    vector<pair<long long, long long>> msg(n);
    for (int i = 0; i < n; i++) {
        cin >> msg[i].second >> msg[i].first;
    }
    
    sort(msg.begin(), msg.end());
    
    int max_k = 0;
    
    for (int i = 0; i < n; i++) {
        priority_queue<long long> pq;
        long long sum_a = 0;
        
        for (int j = i; j < n; j++) {
            pq.push(msg[j].second);
            sum_a += msg[j].second;
            
            long long current_cost = sum_a + msg[j].first - msg[i].first;
            
            while (!pq.empty() && current_cost > l) {
                sum_a -= pq.top();
                pq.pop();
                current_cost = sum_a + msg[j].first - msg[i].first;
            }
            
            if (pq.size() > max_k) {
                max_k = pq.size();
            }
        }
    }
    
    cout << max_k << "\n";
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