#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;

    

    cin>>kr;
    while(kr--)
    {
            
        ll n,a0,ans=0;
        int r,t=0;
        cin>>n;
        string s;
        cin>>s;
        
         
        
        
        for(ll i=0;i<n;i++)
            if((s[i]-'0')==1 || (s[i]-'0')==4 || (s[i]-'0')==6 || (s[i]-'0')==8 || (s[i]-'0')==9)
            {
                cout<<1<<endl;
                cout<<(s[i]-'0')<<endl;
                t=1;
                break;
            }
        if (t)
            continue;
            
        for(ll i=0;i<n-1;i++)
        {
            if((s[i]-'0')==2 && (s[i+1]-'0')==2)
            {
                cout<<2<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                t=1;
                break;
            }
            if((s[i]-'0')==3 && (s[i+1]-'0')==3)
            {
                cout<<2<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                t=1;
                break;
            }
            if((s[i]-'0')==5 && (s[i+1]-'0')==5)
            {
                cout<<2<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                t=1;
                break;
            }
            if((s[i]-'0')==7 && (s[i+1]-'0')==7)
            {
                cout<<2<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                t=1;
                break;
            }
        }
        if (t)
            continue;  
        

        for(ll i=0;i<n-1;i++)
        {
            if((s[i+1]-'0')==3)
            {
                cout<<2<<endl;
                cout<<s[i]<<s[i+2]<<endl;
                t=1;
                break;
            }
            if((s[i+1]-'0')==7)
            {
                if(s[i]!=3)
                {
                    cout<<2<<endl;
                    cout<<s[i]<<s[i+1]<<endl;
                    t=1;
                    break;
                }
                else if(s[i+2]!=3)
                {
                    cout<<2<<endl;
                    cout<<s[i+1]<<s[i+2]<<endl;
                    t=1;
                    break;
                }
            }
            if((s[i+1]-'0')==2 || (s[i+1]-'0')==3)
            {
                cout<<2<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                t=1;
                break;
            }
        } 
        if (t)
            continue;  
            
            
        for(ll i=0;i<n;i++)
        {
            if(((s[i]-'0')==2 || (s[i]-'0')==3 || (s[i]-'0')==5 || (s[i]-'0')==7) && ((s[i+1]-'0')==2 || (s[i+1]-'0')==3 || (s[i+1]-'0')==5 || (s[i+1]-'0')==7))
            {
              cout<<2<<endl;
                cout<<s[i]<<s[i+1]<<endl;
                t=1;
                break;
            }
        }
        if (t)
            continue;

            
        }

        
            
               

            
        
    

        

    
    return 0;
}