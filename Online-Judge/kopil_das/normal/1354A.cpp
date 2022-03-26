#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int n,a,b,c,d,x,y;
    
    cin>>n;
    while(n--)
    	{
    		cin>>a>>b>>c>>d;
    		if(b>=a)
    			cout<<b<<endl;
    		else if(d>=c)
    			cout<<"-1"<<endl;
    		else
    		{
    			x=c-d;
    			y=(a-b+x-1)/x;
    			y*=c;
    			cout<<y+b<<endl;
    		}

    		
    	}

    
}