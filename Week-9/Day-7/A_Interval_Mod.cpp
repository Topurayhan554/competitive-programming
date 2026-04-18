#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    long long p, q;
    cin >> n >> k >> p >> q;
    
    vector<long long> a(n);
    vector<long long> deltaA(n), deltaB(n);
    long long sumM = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
        long long A = a[i] % p;
        long long B = (a[i] % q) % p;
        long long M = min(A, B);
        
        sumM += M;
        deltaA[i] = A - M;
        deltaB[i] = B - M;
    }

    long long min_deltaA = 2e18;
    long long current_sumA = 0;
    
    for (int i = 0; i < k; ++i) {
        current_sumA += deltaA[i];
    }
    min_deltaA = current_sumA;
    
    for (int i = k; i < n; ++i) {
        current_sumA += deltaA[i] - deltaA[i - k];
        min_deltaA = min(min_deltaA, current_sumA);
    }

    long long min_deltaB = 2e18;
    long long current_sumB = 0;
    
    for (int i = 0; i < k; ++i) {
        current_sumB += deltaB[i];
    }
    min_deltaB = current_sumB;
    
    for (int i = k; i < n; ++i) {
        current_sumB += deltaB[i] - deltaB[i - k];
        min_deltaB = min(min_deltaB, current_sumB);
    }

    cout << sumM + min(min_deltaA, min_deltaB) << "\n";
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