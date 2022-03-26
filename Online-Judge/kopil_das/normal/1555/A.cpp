#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll w,j,i,n,k,mx,t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%6==0)
            cout<<(n/6)*15<<endl;
        else if(n/6<=1)
            cout<<15<<endl;
        else
            cout<<(n/6)*15+10<<endl;

        }   
        
}