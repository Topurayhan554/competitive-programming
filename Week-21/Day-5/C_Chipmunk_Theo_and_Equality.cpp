#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> visited;
    
    visited.reserve(n * 60);

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        int curr = x;
        int d = 0;
        
        while (curr > 2) {
            visited.push_back({curr, d});
            if (curr % 2 == 0) {
                curr /= 2;
            } else {
                curr++;
            }
            d++;
        }
        
        if (curr == 2) {
            visited.push_back({2, d});
            visited.push_back({1, d + 1});
        } else if (curr == 1) {
            visited.push_back({1, d});
            visited.push_back({2, d + 1});
        }
    }

    sort(visited.begin(), visited.end());

    long long min_total_dist = -1;
    
    for (size_t i = 0; i < visited.size(); ) {
        size_t j = i;
        long long current_dist_sum = 0;
        int count = 0;
        
        while (j < visited.size() && visited[j].first == visited[i].first) {
            current_dist_sum += visited[j].second;
            count++;
            j++;
        }
        
        if (count == n) {
            if (min_total_dist == -1 || current_dist_sum < min_total_dist) {
                min_total_dist = current_dist_sum;
            }
        }
        
        i = j;
    }
    
    cout << min_total_dist << "\n";
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