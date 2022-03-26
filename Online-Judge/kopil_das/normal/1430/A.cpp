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
                cin>>r;
                x=r;
                if(r%3==0)
                    {cout<<r/3<<" "<<0<<" "<<0<<endl;
                        continue;}
                if(r%5==0)
                    {cout<<0<<" "<<r/5<<" "<<0<<endl;
                        continue;}
                if(r%7==0)
                    {cout<<0<<" "<<0<<" "<<r/7<<endl;
                        continue;}

                if(r%3!=0)
                {
                    x-=5;
                    if(x%3==0 and x>0)
                    {cout<<x/3<<" "<<1<<" "<<0<<endl;
                                        continue;}
                }
                if(r%3!=0)
                {
                    x=r;
                    x-=7;
                    if(x%3==0 and x>0)
                    {cout<<x/3<<" "<<0<<" "<<1<<endl;
                                        continue;}
                }

                
            cout<<-1<<endl;
        }
  
    
    return 0;
     
}