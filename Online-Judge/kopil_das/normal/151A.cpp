#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n >>k >> l>> c>> d>> p>> nl>> np;
	int a,b,x,ans;
	a=(k*l)/nl;
	b=c*d;
	x=p/np;
	ans=(min(min(a,b),x))/n;
	cout<<ans;
	
}