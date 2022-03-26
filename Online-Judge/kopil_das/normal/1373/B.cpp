#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k,n;
    scanf("%lld",&n);
    
    while(n--)
    {
        int a=0,b=0;
        string s;
        cin>>s;
        int sz=s.size();
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='1')
                a++;
            else if(s[i]=='0')
                b++;
        }

         if(min(a,b)%2!=0)
             cout<<"DA"<<endl;
         else
             cout<<"NET"<<endl;


    }
   
        
}