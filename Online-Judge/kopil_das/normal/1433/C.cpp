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
        int ar[x];
        for (int i = 0; i < x; ++i)
        {
            cin>>ar[i];
        }
        auto mx=*max_element(ar,ar+x);
        for (int i = 0; i < x; ++i)
        {
            if(ar[i]==mx)
            {
                ind=i+1;
                for (int j = i+1; j < x; ++j)
                {
                    if(ar[j]<mx)
                        mx++;
                    else
                        break;
                }
                for (int j = i-1; j >=0; --j)
                {
                    if(ar[j]<mx)
                        mx++;
                    else
                        break;

                }

                if(ind==x and ar[x-1]==mx)
                    ind=-1;
            }
        }
        cout<<ind<<endl;

      
    }  
    return 0;
     
}