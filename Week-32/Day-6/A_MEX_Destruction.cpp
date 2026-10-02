#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int first_non_zero = -1;
    int last_non_zero = -1;

    for(int i = 0; i<n;i++){
        cin >> a[i];
        if(a[i] != 0){
            if(first_non_zero == -1){
                first_non_zero = i;
            }
            last_non_zero = i;
        }
    }

    if(first_non_zero == -1){
        cout << 0 << endl;
        return;
    }

    bool has_zero = false;
    for(int i=first_non_zero; i<= last_non_zero; i++){
        if(a[i] == 0){
            has_zero = true;
            break;
        }
    }

    if(has_zero){
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
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