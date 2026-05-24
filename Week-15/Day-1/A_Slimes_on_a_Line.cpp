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

        int mn = 1005;
        int mx = 0;

        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            
            mn = min(mn, a);
            mx = max(mx, a);
        }

        int ans = (mx - mn + 1)/2;
        cout << ans << endl;
    }
    return 0;
}