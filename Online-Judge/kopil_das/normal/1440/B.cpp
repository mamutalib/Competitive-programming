#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];
int main()
{
    lg n,x,t,k;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         lg sz=n*k,m=1,sum=0;
         lg a[sz];

         for(auto i=1;i<=sz;i++)
            cin>>a[i];

         lg lmt=0;
         while(sz>=n && lmt<k)
         {
            sum+=a[sz-(n/2)];
            sz=sz-(n/2)-1;
            lmt++;

         }
     
     cout<<sum<<endl;        
    }
    
    
    return 0;
     
}