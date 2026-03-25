#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin >> n;
        string s;
        cin >> s;

        if(n%2 != 0){
            cout << "NO" << endl;
            return;
        }

        stack<char> st;
        for(char c : s){
            if(!st.empty() && st.top() == c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        
        if(st.empty()){
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