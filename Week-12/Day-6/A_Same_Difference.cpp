#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int target = s[n-1];
    int operation = 0;

    for(int i=0;i<n-1;i++){
        if(s[i] != target){
            operation++;
        }
    }

    cout << operation << endl;
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