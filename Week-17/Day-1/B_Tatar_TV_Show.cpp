#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    string s; 
    cin >> s;
    
    vector<int> count1(k, 0);
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            count1[i%k]++;
        }
    }
    bool possible = true;
    for(int i=0;i<k;i++){
        if(count1[i] % 2 != 0){
            possible = false;
            break;
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