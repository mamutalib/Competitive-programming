#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mx,mn,same,r,k;
    cin>>j;
    while(j--)
    {
        same=0;
        t=1;
        cin>>x>>y;
        if(x==0 and y%2!=0)
            cout<<-1<<" "<<-1<<endl;
        else if(y==0 and x%2!=0)
            cout<<-1<<" "<<-1<<endl;
        else if((x+y)%2!=0)
            cout<<-1<<" "<<-1<<endl;
        else
        {
            k=(x+y)/2;
        n=max(x,y)-k;
        k=min(x,y);
        if(k==x)
            cout<<k<<" "<<n<<endl;
        else
            cout<<n<<" "<<k<<endl;
        }
        
      
    }
                
        
    

    
    
    return 0;
     
}