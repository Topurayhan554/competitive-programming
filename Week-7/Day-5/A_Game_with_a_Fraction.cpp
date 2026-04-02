#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long p, q;
        cin >> p >> q;

        long long threeP = 3*p;
        long long twoQ = 2 * q;

        if(threeP >= twoQ && (threeP - twoQ) <= (q-1)){
            cout << "Bob" << endl;

        }else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}