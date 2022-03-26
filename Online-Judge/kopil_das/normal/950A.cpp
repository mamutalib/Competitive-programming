#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
		ll l,r,a,ans=0;
		cin>>l>>r>>a;
		if(l>r)
			r+=a;
		else if(l<r)
			l+=a;
		else if(l==r)
		{
			if(a%2==0)
				ans=l+r+a;
			else
				ans=(l+r+a)-1;
			cout<<ans<<endl;
			return 0;
		}
		if(l>=r)
			ans=2*r;
		else if(l<=r)
			ans=2*l;
		cout<<ans<<endl;
		return 0;
		
	
}