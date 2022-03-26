#include<bits/stdc++.h>
using namespace std;

long long int x,y,n,m,ans=0,cb=0,cj=0,r,l,i,j;
int main(){
    
    cin>>n>>m;
    while(n--)
    	{
    		cin>>x;
    		if(x==1)cb++;
    		else
    			cj++;
    	}
    for(i=0;i<m;i++)
    {
    	cin>>l>>r;
    	y=r-l+1;
    	if(y%2==0 && y/2<=cb && y/2<=cj)
    		cout<<1<<endl;
    	else
    		cout<<0<<endl;
    }
}