#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

const int MAX_P = 200000;
vector<int> primes;
bool is_prime[MAX_P + 1];
void sieve() {
    fill(is_prime + 2, is_prime + MAX_P + 1, true);
    for (int p = 2; p * p <= MAX_P; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAX_P; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= MAX_P; p++) {
        if (is_prime[p]) primes.push_back(p);
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        ll val = (ll)primes[i] * primes[i + 1];
        cout << val << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}