#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long k, x;
    cin >> k >> x;
    
    int p = 0;
    while(((x >> p) & 1) == 0){
        p++;
    }

    vector<int> ops;
    for(int i=p+1; i<=k;i++){
        if((x >> i) & 1){
            ops.push_back(2);
        }else{
            ops.push_back(1);
        }
    }


    cout << ops.size() << endl;

    for(int i=0;i<(int)ops.size();i++){
        cout << ops[i] << (i + 1 == ops.size() ? "": " ");
    }
    cout << endl;
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