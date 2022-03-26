#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,brc=0;
		cin>>n;
		char ar[n];
		cin>>ar;
		//gets(ar);
		for(int i=n-1;i>=0;i--)
		{
			if(ar[i]==')')
				brc++;
			else
				break;
		}
		int ans=n-brc;
		if(ans<brc)
			cout<<"YES"<<endl;
		else if(ans>=brc)
			cout<<"NO"<<endl;
	}
}