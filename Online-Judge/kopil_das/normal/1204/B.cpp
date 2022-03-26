#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];
int main()
{
    lg n,x,t,ans,k,l,r;
    cin>>n>>l>>r;
    // min
    lg min=0,mx=0;
    min=(n-l)+1;
    x=n-min;
    k=2;
    while(x--)
    {
        min+=k;
        k*=2;
    }
    //max
    k=r;
    t=n-k;
    x=1;
    while(k--)
    {
        mx+=x;
        x*=2;
    }
    x/=2;
    if(t>0)
        mx+=(x*t);
    
     cout<<min<<" "<<mx<<endl;        
    
    
    
    return 0;
     
}