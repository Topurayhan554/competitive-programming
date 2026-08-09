#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    map<int, int> freq;
    
    long long total_sum = 0;
    int max_freq = 0;
    int most_frequent_card = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
        total_sum += a[i];
        
        if (freq[a[i]] > max_freq) {
            max_freq = freq[a[i]];
            most_frequent_card = a[i];
        }
    }
    
    if (max_freq <= (n + 1) / 2) {
        cout << total_sum << "\n";
    } else {
        long long other_cards_sum = total_sum - (1LL * max_freq * most_frequent_card);
        
        long long max_damage = other_cards_sum + 1LL * (n - max_freq + 2) * most_frequent_card;
        
        cout << max_damage << "\n";
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