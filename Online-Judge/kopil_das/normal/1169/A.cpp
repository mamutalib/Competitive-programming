#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r=0,a,s=1,x,t,mx,mn,b,c,y,n;
    //string s;
        cin>>n>>a>>x>>b>>y;
        k=a;
        r=b;
        if(k==r){
            cout<<"yes"<<endl;
            return 0;
        }

        while(1)
        {
            k++;
            r--;

            if(k==n+1)k=1;
            if(r==0)r=n;
            if(k==r){
            cout<<"yes"<<endl;
            return 0;
            }
            if(k==x || r==y)break;
        }
            cout<<"NO"<<endl;
  
    
    return 0;
     
}