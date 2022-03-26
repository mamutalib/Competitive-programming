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
        string s;
        cin>>s;
        ext=s.size();
        lg ab=0,ba=0;
        for (i = 0; i < ext; ++i)
        {
            if(s[i]=='a' and s[i+1]=='b')
                ab++;
            else if(s[i]=='b' and s[i+1]=='a')
                ba++;
        }
        lg cn=0,m=max(ab,ba);
        if(ab==ba)
        {
            cout<<s<<endl;
            continue;
        }
        if(m==ab)
         {
            for (i = 0; i < ext; ++i)
            {
            if(s[i]=='a' and s[i+1]=='b')
                {
                    s[i]='b';
                    cn++;
                }
                if(cn==ba)
                    break;
            }
         }
        else if(m==ba)
         {
            
            for (i = 0; i < ext; ++i)
            {
            if(s[i]=='b' and s[i+1]=='a')
                {
                    s[i+1]='b';
                    cn++;
                }
                if(cn==ab)
                    break;
            }
     
         }
            cout<<s<<endl;
                
        
    }

    
    
    return 0;
     
}