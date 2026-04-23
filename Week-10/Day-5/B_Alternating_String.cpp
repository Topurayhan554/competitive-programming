#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.length();

    int bad_pair = 0;

    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            bad_pair++;
        }
    }

    if(bad_pair <= 2){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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