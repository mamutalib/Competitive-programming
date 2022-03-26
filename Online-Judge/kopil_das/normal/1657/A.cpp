#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000;
lg ar[N];
 
int main()
{
    lg n,x,y,i,j,B,k,ai,sum;
    cin>>k;
    while(k--)
    {
        ai=sum=0;
        i=0;
        cin>>n>>B>>x>>y;
        while(1)
        {
            i++;
            if((ai+x)<=B)
                ai+=x;
            else
                ai-=y;
            sum+=ai;
            if(i>=n)break;
        }
    
        cout<<sum<<endl;
    }
    

    return 0;
}