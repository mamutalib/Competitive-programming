#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int fac(int n){
	if(n>1)
		return n*fac(n-1);
	else
		return 1;
}

int main(){
	int n,d,ans=0;
		cin>>n>>d;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];

	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
	{
		int x=abs(ar[i]-ar[j]);
		if(x<=d)
			ans+=2;
	}
	cout<<ans;
}