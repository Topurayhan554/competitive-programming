#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> p(n);
    int pos_of_1 = -1;
    int pos_of_max = -1;

    for(int i=0;i<n;i++){
        cin >> p[i];
        if(p[i] == 1){
            pos_of_1 = i;
        }
        if(p[i] == n){
            pos_of_max = i;
        }
    }

    swap(p[0], p[pos_of_max]);

    for(int i=0;i<n;i++){
        cout << p[i] << (i == n-1? "" : " ");
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