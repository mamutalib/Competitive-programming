#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mx,mn,s,k,r;
 
    
    cin>>j;
    while(j--)
    {
        cin>>x>>y;
        mx=mn=0;
        for ( i = 0; i < x; ++i)
        {
            cin>>ar[i];
            mn+=ar[i];
            mx+=ceil((ar[i])/(float)x);
        }
            cout<<mn/x<<" "<<mx<<endl;
      
    }
                
        
    

    
    
    return 0;
     
}