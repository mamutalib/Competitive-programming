#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k;
    cin>>k;

   while(k--){
    int n,m;
    cin>>n>>m;
    char s;
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {  
            cin>>s;
            if(i==n && s=='D')ans++;
            if(j==m && s=='R')ans++;
        }
    cout<<ans<<endl;
   }
   
}