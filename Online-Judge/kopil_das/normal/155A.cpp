#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,i,j,hg,lw,ans=0,x;
	cin>>n;
	cin>>x;
	hg=lw=x;
	n--;
	while(n--)
	{
		cin>>x;
		if(x<lw)
			{
				ans++;
				lw=x;
			}
		else if(x>hg)
			{
				ans++;
				hg=x;
			}


	}

	cout<<ans;

    
}