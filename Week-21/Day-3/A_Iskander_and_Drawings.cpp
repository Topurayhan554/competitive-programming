#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_len = 0;
    int cur_len = 0;

    for(int i=0;i<n;i++){
        if(s[i] == '#'){
            cur_len++;
            max_len = max(max_len, cur_len);
        }else{
            cur_len = 0;
        }
    }
    cout << (max_len + 1)/2 << endl;
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