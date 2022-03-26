#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define For(a,b) for(int i=a;i<)


int main(){
	int s,a,n,ans;
	cin>>s>>a>>n;

	while(1)
	{

		ans=__gcd(s,n);
		if(ans>n)
			{cout<<1;break;}

		n-=ans;

		ans=__gcd(a,n);

		if(ans>n)
			{cout<<0;break;}
		n-=ans;

	}

    
}