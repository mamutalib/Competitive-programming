#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;
lg ar[N];

int main()
{
    lg n,x,t,l,r,k;
    
    cin>>n;
    
    if(n<4)
    {
        if(n==3)
        {
            n=n/3;
            cout<<n<<" "<<n<<" "<<n;
        }
        else if(n==0)
            cout<<0<<" "<<0<<" "<<0;
        else if(n==1)
            cout<<0<<" "<<0<<" "<<1;
        else
            cout<<0<<" "<<1<<" "<<1;

    }
    else
    {
        ar[0]=0;
        ar[1]=1;
        lg i=1;
        while(i++)
        {
            ar[i]=ar[i-2]+ar[i-1];
            if(ar[i]==n)
                break;
        }
        lg a,b,c;
        a=ar[i-1];
        b=ar[i-3];
        c=ar[i-4];
        if((a+b+c)==n)
            cout<<a<<" "<<b<<" "<<c<<endl;
        else
            cout<<"I'm too stupid to solve this problem";
    }
    
    
    
    
    return 0;
     
}