#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);

    int first_parity = - 1;
    bool possible = true;

    for(int i=1;i<=n;i++){
        int val;
        cin >> val;
        
        int current_parity = (val + i) % 2;
        if(i == 1){
            first_parity = current_parity;
        }
        else{
            if(current_parity != first_parity){
                possible = false;
            }
        }
    }

    if(possible){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;

    }
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