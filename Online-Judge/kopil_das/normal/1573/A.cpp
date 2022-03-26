#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
            
        ll n,a0,ans=0;
        int r;
        cin>>n;
        string sr;
        cin>>sr;
        ll i=n-1,j=0;
         
           

        while(n--)
        {

            r=sr[i--]-'0';
            if(r)
            {
                if(j)
                {
                    ans++;
                   
                    
                }
                ans+=r;
                
                
            }
           j=1;
            
            
        }

        
            
                cout<<ans<<endl;

            
        
    }

        

    
    return 0;
}