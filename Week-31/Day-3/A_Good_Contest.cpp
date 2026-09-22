#include <bits/stdc++.h>
using namespace std; 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        
        
        int n;
        cin >> n;
    
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
    
        int max_strong = min({a1, a2, a3});
    
        cout << n - max_strong << "\n";
    }
    
    return 0;
}