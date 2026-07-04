#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int mx_val = 0;
        for(int i=0;i<n;i++){
           int x;
           cin >> x;
           mx_val = max(mx_val, x);
        }
        cout << mx_val << endl;
    }
    return 0;
}