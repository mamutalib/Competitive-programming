#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll kr,n,u1,p;
 
    
 
    cin>>kr;
    while(kr--)
    {
        cin>>n;
        string s;
        cin>>s;
        for(auto i=0;i<n;i++)
        {
            if(s[i]!='?')
            {
                auto j=i;
                while(j--)
                {
                    if(s[j]=='?')
                        if(s[j+1]=='R')s[j]='B';
                        else if(s[j+1]=='B')
                            s[j]='R';
                    
                }
            }
        }
        for(auto i=0;i<n;i++)
        {
            if(s[0]=='?')
            {
                s[0]='B';
                continue;
            }
            if(s[i]=='?')
                if(s[i-1]=='R')s[i]='B';
                else if(s[i-1]=='B')s[i]='R';
        }
        
        cout<<s<<endl;
    }
 
    return 0;
}