#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n;

    

    cin>>kr;
    while(kr--)
    {
            bool t=false;
        ll at,h,n;
        cin>>at>>h>>n;
        ll mAt[n],mH[n];
        for(auto i=0;i<n;i++)
            cin>>mAt[i];
        for(auto i=0;i<n;i++)
            cin>>mH[i];

        for(auto i=0;i<n;i++)
            {
                ll a=mH[i]%at;
                ll b=ceil(mH[i]/at);
                if(h-(b*mAt[i])>0 || a==0)
                    t=true;

            }
            if(t)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;



    }

    
    return 0;
}