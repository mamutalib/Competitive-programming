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
        mv=0;
        cin>>x;
        vector<lg> v;
        for ( i = 1; i <= x; ++i)
        {
            cin>>y;
            mv=max(mv,y-i);

        }

        cout<<mv<<endl;
                
        
    }

    
    
    return 0;
     
}