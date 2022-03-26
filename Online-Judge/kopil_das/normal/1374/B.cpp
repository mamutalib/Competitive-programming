#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
        cin>>n;
        p=0;
        ll q=0;
        while(n>1)
        {
           q++;
            if(n%6==0)
                n/=6;
            else
                n*=2;
            if(n==1)
                break;
            if(n%6!=0)
               {
                ll x=n*2;
                if(x%6!=0)
                {
                    p=-1;
                    break;
                }
               }


            p++;
                
        }
        if(q && p!=-1)p++;
        
        cout<<p<<endl;
    }

    return 0;
}