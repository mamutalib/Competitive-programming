#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k,n;
    cin>>k;

   while(k--){
    scanf("%lld",&n); 
    set<ll> s;  
    int a,ans=0;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
   
    }
}