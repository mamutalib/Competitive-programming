#include<bits/stdc++.h>
using namespace std;


int main(){
	int k,l,m,n,d,ans=0,x=1;
	cin>>k>>l>>m>>n>>d;
	
	while(x<=d)
	{
		if(x%k==0 || x%l==0 || x%m==0 || x%n==0)
			ans++;

		x++;
	}

	cout<<ans;

    
}