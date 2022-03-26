#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
//lg ar[N];

int main()
{
    lg n,a,b,c,r,t,i,j,mx,mn,same,k,count,ans=0;
    string s,ar;
    cin>>j;
    while(j--)
    {
        cin>>n;
        if(n%2==0)
            for (i = 0; i < n/2; ++i)
            {
                cout<<1;
            }
        else
        {
            cout<<7;
            for (int i = 0; i < (n/2)-1; ++i)
            {
                cout<<1;
            }
        }

        
            cout<<endl; 
    }  
    return 0;
     
}