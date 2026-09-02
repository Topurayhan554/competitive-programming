#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000005;
int spf[MAX_N];

void sieve() {
    for (int i = 1; i < MAX_N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i < MAX_N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX_N; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    if (n == 1) {
        cout << "YES\n";
    } 
    else if (spf[n] <= m) {
        cout << "NO\n";
    } 
    else {
        cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}