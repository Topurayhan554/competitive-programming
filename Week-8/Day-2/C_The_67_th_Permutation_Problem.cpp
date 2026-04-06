#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int small_ptr = 1;
    int largest_ptr = n + 1;

    for(int i=0;i<n;i++){
        
        cout << small_ptr << " " << largest_ptr << " " << largest_ptr + 1 << " ";
        small_ptr++;
        largest_ptr += 2;
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