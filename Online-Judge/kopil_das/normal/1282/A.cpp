#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
//lg ar[N];

int main()
{
    lg n,a,b,c,r,t,i,j,mx,mn,same,k,count,ans=0;
    string s,ar;
    cin>>j;
    while(j--)
    {
        cin>>a>>b>>c>>r;
        mx=max(a,b);
        mn=min(a,b);
        ans=0;
        i=c-r;
        j=c+r;
        k=max(i,mn);
        int ext=min(j,mx)-k;
        ans=abs(b-a)-max(0,ext);
        
            cout<<ans<<endl;
      
    }  
    return 0;
     
}