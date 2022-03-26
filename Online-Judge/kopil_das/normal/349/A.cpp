#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000000; //BIG LOOOOOOOOOL
lg ar[N];
 
int main()
{
    lg n,x,y,i,j,B,k,ai,sum=0,c,r,cnt;
    cin>>k;
    for(i=0;i<k;i++)
        cin>>ar[i];
    if(ar[0]!=25)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    else
    {
        sum+=ar[0];
        for(i=1;i<k;i++)
        {
            if(ar[i]==25)
            sum+=ar[i];
            else
            {
                sum+=25;
                ar[i]-=25;
                sum-=ar[i];
            }
            if(sum<25)
            {
                cout<<"NO "<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
            
    }
    

    return 0;
}