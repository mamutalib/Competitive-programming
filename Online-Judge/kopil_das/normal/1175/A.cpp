#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r,a,s,x,t,mx,mn;
    cin>>j;
    while(j--){
        ans=i=x=0;
        cin>>a>>k;
        while(a)
        {
            ans+=a%k;
            a-=(a%k);
            a/=k;
            ans++;
        }
        cout<<ans-1<<endl;
    }
    return 0;
     
}