#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];
int main()
{
     string a,b;
     cin>>a>>b;
     for(auto i=0;i<a.size();i++)
     {
        if(b[i]>a[i])
        {
            cout<<-1;
            return 0;
        }
     }
     cout<<b;
        
    
    
    
    return 0;
}