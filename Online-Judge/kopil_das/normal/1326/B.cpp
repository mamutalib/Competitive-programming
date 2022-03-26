#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll i,n;
    scanf("%lld",&n);
    ll v[n],x=0;
        for(i=0;i<n;i++)
                {
                    cin>>v[i];
                    v[i]+=x;
                    x=max(x,v[i]);

                    cout<<v[i]<<" ";
                }
        
}