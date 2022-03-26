#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll k,x,xx,n,m;
 
    
 
    cin>>k;
    while(k--)
    {
        cin>>xx>>n>>m;
        x=xx;
        if(x<20)
            xx=xx-(m*10);
        if(xx>0)
        while(n--)
        {
            xx=xx/2+10;
        }
        if(x>=20)
             xx=xx-(m*10);
        
        if(xx<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
    return 0;
}