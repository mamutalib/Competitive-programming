#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    
    string s,t;
    cin>>s>>t;
    ll sLen,tLen,m,x,y,ans=0;
    sLen=s.size();
    tLen=t.size();
    x=sLen-1;
    y=tLen-1;
    m=min(sLen,tLen);
    for(int i=m;i>0;i--){
        if(s[x--]==t[y--])
            ans++;
        else
            break;
    }     
    cout<<(sLen+tLen)-2*ans;


        

          
        
}