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
        vector<int> p(n);
        int even_num = 2;
        int odd_num = 1;

        for(int i=0;i<n;i++){
            if(i%2 == 0){
                p[i] = even_num;
                even_num += 2;

            }else{
                p[i] = odd_num;
                odd_num += 2;
            }
        }
        for(int i=0;i<n;i++){
            cout << p[i] << (i == n-1? "": " ");
        }
        cout << endl;
    }
    return 0;
}