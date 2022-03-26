#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

int main()
{
    lg t;
    cin>>t;
    while(t--)
    {
        lg l,r,ans=0;
        cin>>l>>r;
        for(auto i=l;i<=r;i++)
        {
            if(i%2==0)
                ans+=i;
            else
                ans+=(-i);
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}