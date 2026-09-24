#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;


    if(s[0] == '1'){
        int zeros = 0;
        for(char c: s){
            if(c == '0') zeros++;
        }

        cout << zeros << "\n";
        return;
    }

    int p = -1;
    for(int i = 0;i<n;i++){
        if(s[i] == '1'){
            p = i;
            break;
        }
    }

    if(p == -1){
        cout << 0 << endl;
        return;
    }

    int current_suff = 0;

    for(int i=p;i<n;i++){
        if(s[i] == '0'){
            current_suff++;
        }
    }

    int current_pref = 0;
    int ans = current_suff;

    for(int i=p;i<n;i++){
        if(s[i] == '1'){
            current_pref++;
        }else{
            current_suff--;
        }

        ans = min(ans, current_pref + current_suff);
    }

    cout << ans << "\n";
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