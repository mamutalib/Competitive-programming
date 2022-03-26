#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,i,j,k,ext,mv,s;
 
    
    cin>>k;
    lg a[k],b[k];
        x=y=0;
        for (i = 0; i < k; ++i)
            cin>>a[i];

        for (i = 0; i < k; ++i)
            cin>>b[i];

        for (i = 0; i < k; ++i)
        {
            if(a[i]==1  and b[i]==0)x++;
            if(a[i]==0 and b[i]==1)y++;
        }
        if(x==0)
            cout<<-1;
        else
            cout<<ceil((y+1)/float(x));

                
        
    

    
    
    return 0;
     
}