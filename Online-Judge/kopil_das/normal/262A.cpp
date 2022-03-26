#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,n,i,k,ans=0;
    cin>>n>>k;
    while(n--)
    	{
    		cin>>x;
    		i=0;
    		while(x){

    			i+=(x%10==4 || x%10==7);
    			x/=10;
    		}
    		if(i<=k)
    			ans++;
    	}
	cout<<ans;
}