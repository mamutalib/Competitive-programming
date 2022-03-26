#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
        int k,p=0,p4=0,sq_p,sq_p4;
        cin>>k;
        int ar[k],nw[k];
        for(int i=0;i<k;i++)
            cin>>ar[i];
        int ans=0,j=0; 
        
        for(int i=0;i<k;i++)
            if(ar[i]%2==0)
                nw[j++]=ar[i];
                
        for(int i=0;i<k;i++)
            if(ar[i]%2!=0)
                nw[j++]=ar[i];
            
        
        for(int i=0;i<k;i++)
            for(j=i+1;j<k;j++)
            {
                if(__gcd(nw[i],2*nw[j])>1)
                    ans++;
            }
        
        
            cout<<ans<<endl;
    }
    return 0;
}