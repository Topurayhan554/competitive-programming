#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
    
        long long score1 = abs(a - b);
        long long score2 = abs(a + c - b);
    
        cout << max(score1, score2) << "\n";
    }
    
    return 0;
}