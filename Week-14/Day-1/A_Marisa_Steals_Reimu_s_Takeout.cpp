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

        int count0 = 0, count1 = 0, count2 = 0;
        for(int i=0;i<n;i++){
            int w;
            cin >> w;

            if(w==0){
                count0++;
            }
            else if(w==1){
                count1++;
            }
            else if(w==2){
                count2++;
            }
        }

        int ans = count0;
        int pairs = min(count1, count2);
        ans += pairs;

        count1 -= pairs;
        count2 -= pairs;

        ans += count1 / 3;
        ans += count2 / 3;

        cout << ans << endl;

    }
    return 0;
}