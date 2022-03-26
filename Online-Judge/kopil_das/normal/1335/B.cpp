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
        cin>>n>>a>>b;
       // char c;
        count=0;
        for (i = 1,k=97; i <= n; ++i,k-=-1)
        {
            if(count==b){k=97;count=0;}
            printf("%c",k);
            count++;
        }

        
            cout<<endl;
            
      
    }  
    return 0;
     
}