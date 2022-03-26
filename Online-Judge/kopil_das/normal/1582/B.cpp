#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,t,a,b;
    
    cin>>n;
    while(n--)
    {
        a=b=0;
        cin>>t;
        for (int i = 0; i < t; ++i)
        {
            cin>>x;
                a+=x==1;
                b+=x==0;
        }
        cout<<(1LL<<b)*a<<endl;
    }
    
    
    
    return 0;
     
}