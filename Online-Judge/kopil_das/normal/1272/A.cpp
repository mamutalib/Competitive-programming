#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r,a,s,x,t,mx,mn,b,c;
    //string s;
    cin>>j;
    while(j--){
        cin>>ar[0]>>ar[1]>>ar[2];
        if(ar[0]==ar[1] and ar[1]==ar[2])
        {
            cout<<0<<endl;
            continue;
        }
        //max
        mx=max(max(ar[0],ar[1]),ar[2]);
        for (int i = 0; i < 3; ++i)
        {
            if(mx==ar[i])
                ar[i]-=1;
        }
        if(ar[0]==ar[1] and ar[1]==ar[2])
        {
            cout<<0<<endl;
            continue;
        }
        //min
        mn=min(min(ar[0],ar[1]),ar[2]);
        for (int i = 0; i < 3; ++i)
        {
            if(mn==ar[i])
                ar[i]+=1;
        }
        if(ar[0]==ar[1] and ar[1]==ar[2])
        {
            cout<<0<<endl;
            continue;
        }

        cout<<abs(ar[0]-ar[1])+abs(ar[0]-ar[2])+abs(ar[1]-ar[2])<<endl;
        //cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;
    }
    return 0;
     
}