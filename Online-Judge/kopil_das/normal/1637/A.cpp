#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg j,ans,i,k,r=0,a,s=1,x,t,mx,mn,b,c,y,n;
    //string s;
        cin>>k;
        while(k--)
            {
                s=1;
                cin>>r;
                cin>>a;
                mx=a;
                r--;
                while(r--)
                {
                    cin>>a;
                    if(mx>a)
                    {
                        cout<<"yes"<<endl;
                        s=0;
                        break;
                    }
                    mx=a;
                }
                if(s)
                    cout<<"no"<<endl;


        }
  
    
    return 0;
     
}