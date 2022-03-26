#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000;
lg ar[N];
 
int main()
{
    lg n;
    cin>>n;
    while(n--){
        lg l,r,a,ans=0,d,e;
        cin>>l>>r>>a;
        lg ml=r-(r%a);
        if(ml>=l)
        ans=((ml-1)%a)+floor((ml-1)/a);
        if(r%a==0)
        {
            ans=(r-1)%a+floor((r-1)/a);
        }
   
        
        d=(r%a)+floor(r/a);
        e=(l%a)+floor(l/a);
        ans=max(ans,max(d,e));
        cout<<ans<<endl;
    }
    

    return 0;
}