#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lg n,k;
        cin>>n>>k;
        if(n%k==0 || n<=k)
            cout<<n<<endl;
        else
        {
            lg cnd=n/k;
            lg ans=(cnd*k+min(n%k,k/2));
        
            cout<<ans<<endl;
        }
    }

    

        

            
        

        
            
               

            
        
    

        

    
    return 0;
}