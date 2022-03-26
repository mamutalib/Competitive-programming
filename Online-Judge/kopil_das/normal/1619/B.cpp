#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
//lg ar[N];

int main()
{
    lg n,a,b,c,r,t,i,j,mx,mn,same,k,count,ans=0;
    string s,ar;
    cin>>j;
    while(j--)
    {
        ans=1;
        cin>>n;
        lg sq=sqrt(n);
        lg cb=cbrt(n);
        ans=sq;
        if(n>7)
        {
            //ans=sq+1;
            for(i=2;i<=cb;i++)
            {
                lg po=pow(i,3);

                lg pr=sqrt(po);
                if(pr*pr!=po and po<=n)
                    ans++;
                
            }
        }
        
        cout<<ans<<endl;

    }  
    return 0;
     
}