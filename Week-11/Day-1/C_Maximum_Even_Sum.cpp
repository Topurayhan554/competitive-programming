#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long a, b;
    cin >> a >> b;
    
    int A = __builtin_ctzll(a);
    int B = __builtin_ctzll(b);
    
    long long b_odd = b >> B;
    
    long long max_sum = -1;
    
    for (int x = 0; x <= B; ++x) {
        bool a_even = (A + x > 0);
        bool b_even = (B - x > 0);
        
        if (a_even == b_even) {
            long long k1 = (1LL << x);
            long long sum1 = a * k1 + b / k1;
            if (sum1 > max_sum) max_sum = sum1;
            
            long long k2 = (1LL << x) * b_odd;
            long long sum2 = a * k2 + b / k2;
            if (sum2 > max_sum) max_sum = sum2;
        }
    }
    
    cout << max_sum << "\n";
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