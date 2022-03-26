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
        cin>>a;
        vector<lg>v;
        for (int i = 0; i < a; ++i)
        {
            cin>>k;
            ans+=k;;
        }
        if(ans%a==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;

    }
    return 0;
     
}