#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=200;
lg ar[N];
int main()
{
    lg t,xx,yy,ans;
    vector<lg>x;
    cin>>t;


    while(t--)
    {
        cin>>xx;
        for (int i = 0; i < xx; ++i)
            {
                for (int j = 0; j < xx; ++j)
            {
                if(i==j && j<=xx-2)
                {
                    ar[j]=1;
                    ar[j+1]=1;
                    j+=2;
                }
                else if(i==j && j>xx-2)
                {
                    ar[0]=1;
                    ar[j]=1;
                }
                else
                    ar[j]=0;
            }
            for (int k = 0; k < xx; ++k)
            {
                cout<<ar[k]<<" ";
            }
            cout<<endl;
            }
    }
        
    
    
    
    return 0;
}