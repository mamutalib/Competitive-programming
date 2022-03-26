#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
            
        ll r,a0;
        cin>>r;
        
            u1=r%2020;
            a0=(r-u1)/2020-u1;
            if(a0>=0 && (a0*2020)+(u1*2021)==r)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

            
        
    }

        

    
    return 0;
}