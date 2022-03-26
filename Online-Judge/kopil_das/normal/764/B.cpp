#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];
int main()
{
    lg n,x;
     cin>>n;
     lg a[n];
     for(auto i=1;i<=n;i++)
     {
        cin>>a[i];
     }
     lg k=n/2;
     for (auto i = 1; i <= k; i+=2)
     {
        swap(a[i],a[n-i+1]);
     }
      for(auto i=1;i<=n;i++)
         cout<<a[i]<<" ";
    
    
    
    return 0;
     
}