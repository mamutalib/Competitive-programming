#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define For(a,b) for(int i=a;i<)


int main(){
	int a,b,n,ans=0,mx=0;
	cin>>n;

	while(n--)
	{
		cin>>a>>b;
		ans=(ans-a)+b;
		if(ans>mx)
			mx=ans;

	}
	cout<<mx;

    
}