#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000;
lg ar[N];
 
int main()
{
    lg n,x,y,i,j,B,k,ai,sum,c,r,cnt;
    cin>>k;
    while(k--)
    {
        c=r=i=0;
        cnt=1;
        cin>>n;
        string s;
        cin>>s;
        lg len=s.length();
        for (i=0;i<len-1;i+=2) {
            if(s[i]=='(' and s[i+1]==')')
            c++;
            else if(s[i]=='(' and s[i+1]=='(')
            c++;
            else if(s[i]==')' and s[i+1]==')')
            c++;
            else if(s[i]==')')
            {
                for(j=i+1;j<len;j++)
                {
                    if(s[j]==')')
                    {
                        c++;
                        i=j-1;
                        break;
                    }
                }
                if(j==len)break;
            }
            
            
        }
    
        cout<<c<<" "<<len-i<<endl;
    }
    

    return 0;
}