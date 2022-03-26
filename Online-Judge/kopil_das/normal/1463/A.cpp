#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long ar[3];
		cin>>ar[0]>>ar[1]>>ar[2];
		sort(ar,ar+3);
		int ans=ar[1]+ar[2];
		if(ans%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}