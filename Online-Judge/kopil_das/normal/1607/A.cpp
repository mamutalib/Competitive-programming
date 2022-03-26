#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,a,i,j,k,b,ext,mv;
 
    
    cin>>n;
    while(n--)
    {
        string s,s2;
        cin>>s>>s2;
        x=s.size();
        y=s2.size();
        for (int i = 0; i < x; ++i)
        {
            ar[int(s[i])]=i+1;
            
        }
        mv=0;
        if(y>1)
        for (int i = 0; i < y-1; ++i)
        {
            mv+=abs(ar[int(s2[i])]-ar[int(s2[i+1])]);
        }
        cout<<mv<<endl;
                
        
    }

    
    
    return 0;
     
}