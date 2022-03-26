#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
        ll k,p=0,p4=0,sq_p,sq_p4;
        cin>>k;
        
        p=k/2;
        sq_p=sqrt(p);
         
        p4=k/4;
        sq_p4=sqrt(p4);
        
        if(k%2==0 && sq_p*sq_p==p)
            cout<<"YES"<<endl;
        else if(k%4==0 && sq_p4*sq_p4==p4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
        
    }

    return 0;
}