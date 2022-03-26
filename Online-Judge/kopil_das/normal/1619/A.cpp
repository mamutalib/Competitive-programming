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
        ans=0;
        cin>>s;
        n=s.size();
        if (n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            r=n/2;
            for (i = 0; i <n/2; ++i)
            {
                if (s[i]!=s[r++])
                {
                    cout<<"NO"<<endl;
                    ans=1;
                    break;
                }
            }
            if(!ans)
                cout<<"YES"<<endl;
        }


    }  
    return 0;
     
}