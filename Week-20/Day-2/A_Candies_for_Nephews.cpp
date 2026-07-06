#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int reminder = n % 3;
        if(reminder == 0){
            cout << 0 << endl;
        }else {
            cout << 3 - reminder << endl;
        }
    }
    return 0;
}