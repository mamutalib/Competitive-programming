#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
            
        ll n,ns=1,a,b;
        int r,t=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b>=0)
        {
            cout<<(a+b)*n<<endl;
        }
        else
        {
            for(auto i=0;i<n-1;i++)
            {
                if(s[i]!=s[i+1])
                    ns++;
            }
            cout<<a*n+ (ns/2+1)*b<<endl;

        }
      
        

            
        }

        
            
               

            
        
    

        

    
    return 0;
}