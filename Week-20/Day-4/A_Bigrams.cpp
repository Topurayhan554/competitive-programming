#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    cin >> k;

    int count_two_or_more = 0;
    bool has_three_or_more = false;

    for(int i=0;i<k;i++){
        int c;
        cin >> c;
        if(c >= 3){
            has_three_or_more = true;
        }
        if(c >= 2){
            count_two_or_more++;
        }
    }

    if(has_three_or_more || count_two_or_more >= 2){
        cout << "YES" << endl;
    }else{
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