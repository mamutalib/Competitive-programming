#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n,v,l,r;
		cin>>n>>v>>l>>r;
		ll cnt=n/v;
		cnt-=(r/v -(l-1)/v);
		cout<<cnt<<endl;
		
	}
}