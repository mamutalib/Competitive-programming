#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
//lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mx,mn,same,k,ind;
    string s,ar;
    cin>>j;
    while(j--)
    {
        ind=0;
        cin>>x>>y;
        k=x;
        if(x%2==0)
            cout<<x+(y*2)<<endl;
        else
        {
            for (i = 2; i*i <= x; ++i)
            {
                if(x%i==0)
                    {x+=i;
                        break;}
            }
            if(x==k)x+=x;
            y--;
            cout<<x+(y*2)<<endl;
        }
         


      
    }  
    return 0;
     
}