#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll i,n,k,x=0,y=0;
    cin>>n;
    vector<ll> v;
    
        for(i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
 
            if(i<n/2)
                {x+=v[i];
                    }
            else
                y+=v[i];
        }

         cout<<(x*x)+(y*y)<<endl;

    
        
}