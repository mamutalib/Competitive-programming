#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	

	ll t,x=1,n,b,c,i;
	scanf("%lld",&t);
	while(t--){
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(i>n-2){
				if(a[i]!=a[i-1] && a[i]==a[i-2])
				{
					cout<<i<<endl;
					break;
				}
				else if(a[i]!=a[i-1] && a[i-1]==a[i-2])
				{
					cout<<i+1<<endl;
					break;
				}

			}
			if(a[i]!=a[i+1] && a[i]==a[i+2])
				{
					cout<<i+2<<endl;
					break;
				}
			else if(a[i]!=a[i+1] && a[i+1]==a[i+2])
				{
					cout<<i+1<<endl;
					break;
				}



		}

	}
return 0;
}