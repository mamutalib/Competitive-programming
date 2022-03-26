#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];
int main()
{
    lg n,x,t,ans,k;
     cin>>k;
     while(k--)
     {
         cin>>n;
         x=ans=n;

         lg lmt=0;
         while(x>=10)
         {
            t=x;
            x=x/10;
            ans+=x;
            x+=(t%10);
         }
     
     cout<<ans<<endl;        
    }
    
    
    return 0;
     
}