#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=1;
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int curr=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                curr++;
            }
            else{
                curr=1;
            }
            if(curr==m){
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
         cout<<"YES"<<endl;
        
    }
    return 0;
}
