#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mv,s,k,r;
 
    
    cin>>j;
    while(j--)
    {
        cin>>x;
        k=x;
        t=1;
        if(x%2!=0)
        {
            cout<<"yes"<<endl;
            continue;
        }
        if(x>2)
            while(1)
            {
                k=k/2;
                if(k==1)
                    {
                    cout<<"no"<<endl;
                    t=0;
                    break;
                    }
                if(k<1)
                    break;
                if(k%2!=0)
                {
                    cout<<"yes"<<endl;
                    t=0;
                    break;
                }
                
            }

        if (t)
            cout<<"no"<<endl;
      
    }
                
        
    

    
    
    return 0;
     
}