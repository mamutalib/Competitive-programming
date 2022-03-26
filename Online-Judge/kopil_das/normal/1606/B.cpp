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
        mv=1;
        cin>>x>>y;

        if(y>1)
        {
            
            if(y>2 || x>2)
                mv=2;
            else
                mv=1;
            x-=4;
            if(x>0)
            {
                mv+=(x/y);
                mv+=(x%y!=0);
            }
        }
        else
            mv=x-y;
        cout<<mv<<endl;
                
        
    }

    
    
    return 0;
     
}