#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k;
    cin>>k;

   while(k--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx1=max(a,b);
    int min1=min(a,b);
    int mx2=max(c,d);
    int min2=min(c,d);
    
    if(mx1>min2 && mx2>min1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
   }
   
}