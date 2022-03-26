#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k,n;
    scanf("%lld",&n);
    
    while(n--)
    {
        int a,b,c,d,x,y;

        cin>>a>>b>>c>>d;
        x=min(a,b);
        y=min(c,d);

        if(x+y==(max(a,b)) and x+y==max(c,d))
             cout<<"YES"<<endl;
         else
             cout<<"NO"<<endl;


    }
   
        
}