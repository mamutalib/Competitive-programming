#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mx,mn,same,k,c1,c2;
    string s,ar;
    cin>>j;
    while(j--)
    {
        cin>>x>>y;
        lg p=0,pw;
        mn=0;
        while(1){
            pw=x*pow(10,p);
            if(pw>y)
                break;
            p++;
        }
        p--;
        k=0;
         mn=y/(x*pow(10,p));
         pw=y-(mn*(x*pow(10,p)));
         while(p>0)
         {
            p--;
            mn+=pw/(x*pow(10,p));
            k=pw/(x*pow(10,p));
         }
         k*=(x*pow(10,p));
        mn+=(pw-k);
         cout<<mn<<endl;

      
    }
                
        
    

    
    
    return 0;
     
}