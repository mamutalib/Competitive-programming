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
        ll ar[n],kr;
        vector<ll>v(3,0);
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            kr=ar[i]%3;
            if(kr==0)
                v[0]++;
            if(kr==1)
                v[1]++;
            if(kr==2)
                v[2]++;

        }
        
        ll k=3;
        ll ans=0;

        while(k--){
        
        ll mx=*max_element(v.begin(), v.end());
        ll ind=max_element(v.begin(),v.end()) - v.begin();
        
        kr=n/3;
        
        if(mx>kr)
        while(mx>kr)
        {
            if(ind==0)
            {
                if(v[1]<kr)
                {
                    ans++;
                    v[1]++;
                }
                if(v[2]<kr)
                {
                    ans+=2;
                    v[2]++;
                }
                mx--;
                v[0]--;
                continue;
            }
            
            if(ind==1)
            {
                if(v[2]<kr)
                {
                    ans++;
                    v[2]++;
                }
                if(v[0]<kr)
                {
                    ans+=2;
                    v[0]++;
                }
                mx--;
                v[1]--;
                continue;
            }
            
            if(ind==2)
            {
                if(v[0]<kr)
                {
                    ans++;
                    v[0]++;
                }
                if(v[1]<kr)
                {
                    ans+=2;
                    v[1]++;
                }
                mx--;
                v[2]--;
                continue;
            }
        }
        
    }
        
        
        
        cout<<ans<<endl;

        

    }

    
    return 0;
}