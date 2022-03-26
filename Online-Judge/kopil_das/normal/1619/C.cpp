#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r,a,s,x,t;
    cin>>j;
    while(j--)
    {
        ans=i=x=0;
        cin>>a>>s;
        while(a or s)
        {
            
            k=s%10;
            r=a%10;
            
            if(k>=r)
            {
                ar[i++]=k-r;
            }
            else
            {
                
                s/=10;
                if (s%10!=1)
                {
                    cout<<-1;
                    x=1;
                    break;
                }
                ar[i++]=10+k-r;
                
            }
            s/=10;
            a/=10;
        }
        if(!x)
        for(t=i-1;t>=0;t--)
        {
            if (ar[t]==0 and t==i-1)
            {
                continue;
            }
            cout<<ar[t];
        }
        cout<<endl;

    }  
    return 0;
     
}