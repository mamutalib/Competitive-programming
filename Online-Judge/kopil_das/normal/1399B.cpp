#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m,k,r;
    cin>>n;
    while(n--)
    {
    	k=0;
    	r=0;
    	cin>>m;
    	ll ar[m],ar2[m];
    	for(ll i=0; i<m;i++)
    		cin>>ar[i];
    	for(ll i=0; i<m;i++)
    		cin>>ar2[i];
    	ll min=*min_element(ar,ar+m);
    	ll min2=*min_element(ar2,ar2+m);

    	for(ll i=0;i<m;i++)
    	{
    		k+=max(abs(ar[i]-min),abs(ar2[i]-min2));
    	}
    	cout<<k<<endl;
    }
   
}