#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll i,n,k,x,ev,od;
    cin>>n;
    while(n--){
        ev=0;
        od=0;
        cin>>k;
        k*=2;
        while(k--){
            cin>>x;
            if(x%2==1)
                od++;
            else
                ev++;
        }
        if(ev==od)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


    
        
}