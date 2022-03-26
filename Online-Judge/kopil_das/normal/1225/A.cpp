#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000;
lg ar[N];
 
int main()
{
    lg j,ans,i,k,r=0,a,s=1,x,t,mxa,mxb,mna,mnb,b,c,y,n;
    cin>>a>>b;
    mxa=a*10 + 9;
    mna=a*10;
    mxb=b*10 + 9;
    mnb=b*10;
    if(mnb>mna)
    {
        if(mxa+1==mnb)
            cout<<mxa<<" "<<mnb<<endl;
        else
            cout<<-1<<endl;
    }
    else if(mnb==mna)
        {
            if(mna+1==mnb)
                cout<<mna+8<<" "<<mnb<<endl;
            else
                cout<<-1<<endl;
        }
        
    else if(mna>mxb)
        cout<<-1<<endl;
    else if(mxa<mnb)
        cout<<-1<<endl;

    return 0;
}