#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
//lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mx,mn,same,k,ind;
    string s,ar;
    cin>>j;
    while(j--)
    {
        ind=0;
        cin>>x;
        int ar[x+1];
        for (int i = 0; i < x; ++i)
        {
            cin>>ar[i];
            ind+=ar[i];
        }
        mn=0;
        if(ind)
        {
            cout<<"YES"<<endl;
            sort(ar,ar+x);
            if(ind>0)
                reverse(ar,ar+x);
            for (int i = 0; i < x; ++i)
            {
                cout<<ar[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;


      
    }  
    return 0;
     
}