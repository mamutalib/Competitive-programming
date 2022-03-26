#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll r=abs(a-b);
        if(r<2 || r*2<c || r*2<a || r*2<b )
            cout<<-1<<endl;
        else
            {
                if(r+c>r*2)
                    cout<<(r+c)-(r*2)<<endl;
                else
                    cout<<r+c<<endl;
            }
            
    }

    return 0;
}