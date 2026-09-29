#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum_of_squares(ll x) {
    ll sum = 0;
    while (x > 0) {
        ll d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    
    vector<ll> count(9, 0); 
    
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        
        ll curr = a;
        int steps = 0;
        
        while (curr != 1 && curr != 4) {
            curr = sum_of_squares(curr);
            steps++;
        }
        
        if (curr == 1) {
            count[8]++;
        } else {
            count[steps % 8]++;
        }
    }
    
    ll in_tune_pairs = 0;
    for (int i = 0; i < 9; ++i) {
        if (count[i] >= 2) {
            in_tune_pairs += (count[i] * (count[i] - 1)) / 2;
        }
    }
    
    cout << in_tune_pairs << "\n";
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