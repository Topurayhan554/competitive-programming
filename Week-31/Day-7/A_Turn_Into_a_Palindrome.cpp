#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    int coins = 0;
    for(int i=0;i<n/2;i++){
        char left = s[i];
        char right = s[n - 1 - i];

        if(left != right){
            if(left == c || right == c){
                coins += 1;
            }else{
                coins += 2;
            }
        }
    }
    cout << coins << endl;
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