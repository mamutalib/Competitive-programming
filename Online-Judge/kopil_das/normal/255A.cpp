#include<bits/stdc++.h>
using namespace std;


int main(){
    int a=0,b=0,c=0,x,n,i=1;
    cin>>n;
    while(n--)
    	{
    		
    		cin>>x;
    		if(i==1)
    			a+=x;
    		else if(i==2)
    			b+=x;
    		else if(i==3)
    		{
    			c+=x;
    			i=0;
    		}
    		i++;
    	}
    	int mx=max(max(a,b),c);
    	if(mx==a)
    		cout<<"chest";
    	else if(mx==b)
    		cout<<"biceps";
    	else if(mx==c)
    		cout<<"back";
	
}