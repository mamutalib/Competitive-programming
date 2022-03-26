#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,a,i,j,k,b,ext,mv;
 
    
    cin>>n;
    while(n--)
    {
        bool ok=false;
        cin>>a>>b;
        ext=abs(a-b);
        if(!ext)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(ext==1)
        {
            cout<<ext<<" "<<0<<endl;
            continue;
        }
            
        cout<<ext<<" "<<min(__gcd(ext,b),__gcd(a,b))<<endl;
                
        
    }

    
    
    return 0;
     
}