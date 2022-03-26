#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	

	ll t,x=1,a,b,c;
	scanf("%lld",&t);
	while(t--){
		cin>>a>>b>>c;
		c--;
		int x=c%a;
		int y=c/a;
		cout<<x*b +(y+1)<<endl; 


	}
return 0;
}