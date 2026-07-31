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

        map<int, int> freq;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            freq[x]++;
        }

        int max_len = 0;

        for(int c=1;c<=n;c++){
            int valid_ele_c = 0;

            for(auto const &[val, count] : freq){
                if(count >= c){
                    valid_ele_c++;
                }
            }

            int cur_len = valid_ele_c*c;
            max_len = max(max_len, cur_len);


        }
        cout << max_len << endl;
    }
    return 0;
}