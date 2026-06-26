#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    s += s;
    int max_zeros = 0;
    int cur_zeros = 0;

    for(char c : s){
        if(c == '0'){
            cur_zeros ++;
            max_zeros = max(max_zeros, cur_zeros);
        }else{
            cur_zeros = 0;
        }
    }

    cout << max_zeros << endl;
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