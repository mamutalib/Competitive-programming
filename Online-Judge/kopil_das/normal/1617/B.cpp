#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r=0,a,s,x,t,mx,mn,b,c;
    //string s;
    lg m=2;
    while(m<=100)
    {
        b=m/2;
                c=0;
                 
                for(k=2;k<=b;k++)
                {
                    if(m%k==0)
                    {
                        c=1;
                        break;
                    }
                }
               
                if(c==0)
                {
                    ar[r++]=m;
                }
                m++;

    }
    cin>>j;
    while(j--){
        cin>>a;
        if((a-1)%2!=0)
        {
            x=2;
            t=a-3;
        }
        else
        {
            r=0;
            while(1)
            {
                if(__gcd(ar[r],a-ar[r]-1)==1)
                {
                    t=a-ar[r]-1;
                    x=ar[r];
                    break;
                }
                r++;
            }
        }
        cout<<t<<" "<<x<<" "<<1<<endl;
  
    }
    return 0;
     
}