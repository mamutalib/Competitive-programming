#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t,n;
   // bool t=false;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>vc(n,0);
        ll ar[n],mx=0;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(ll i=n-1;i>=0;i--)
        {
            mx=max(mx,ar[i]);
            if(mx>0)
                vc[i]=1;
            mx--;
        }

        for(ll i=0;i<n;i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<endl; 

    }

    
    return 0;
}