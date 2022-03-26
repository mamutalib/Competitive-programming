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
        cin>>n;
        i=1;
        r=1;
        while(1)
        {
            k=pow(2,i);
            r+=k;
            i++;
            if(r==n){
                ans=1;
                break;
            }
            if(n%r==0)
            {
                ans=n/r;
                break;
            }
        }

        
            cout<<ans<<endl; 
    }  
    return 0;
     
}