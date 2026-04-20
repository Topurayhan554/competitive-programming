#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n, k;
        string s;
        cin >> n >> k >> s;
     
        vector<bool> awake(n, false);
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                for(int j = i; j < n && j <= i + k; j++) {
                    awake[j] = true;
                }
            }
        }
        
        int forced_awake = 0;
        for(bool b : awake) if(b) forced_awake++;
        
        int sleep = n - forced_awake;
        cout << sleep << endl;
    }
    return 0;
}