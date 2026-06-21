#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<bool> present(105, false);

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x <= 100){
            present[x] = true;
        }
    }

    int mex = 0;
    while(present[mex]){
        mex++;
    }
    cout << mex << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}