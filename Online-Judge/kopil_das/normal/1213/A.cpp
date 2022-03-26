#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r,a,s,x,t,mx,mn;
    
        ans=i=x=0;
        cin>>a;
        vector<lg>v;
        for (int i = 0; i < a; ++i)
        {
            cin>>k;
            if(k%2==0)ans++;
        }
        
        cout<<min(ans,(a-ans))<<endl;

    
    return 0;
     
}