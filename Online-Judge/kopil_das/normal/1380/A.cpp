#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,t,a,i,j,k,b;
 
    
    cin>>n;
    while(n--)
    {
        bool ok=false;
        cin>>t;
        lg a[t];
        for (i = 0; i < t; ++i)
            cin>>a[i];

        
        for (i = 0; i < t-2; ++i)
        {
            if(a[i]<a[i+1]and a[i+1]>a[i+2])
                        {
                            ok=true;
                            break;
                        }
                    
                    if (ok)
                        break;


        }
        if(ok)
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    
    
    
    return 0;
     
}