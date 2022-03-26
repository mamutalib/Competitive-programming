#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,y,t,i,j,ext,mv;
    string s,k,r;
 
    
    cin>>j;
    while(j--)
    {
        cin>>x>>y;
        cin>>s;
        if(x<=2*y)
        {
            cout<<"no"<<endl;
            continue;
        }
        k=s.substr(0,y);
        r=s.substr(x-y,y);
        reverse(r.begin(),r.end());
        if (k==r)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
      
    }
                
        
    

    
    
    return 0;
     
}