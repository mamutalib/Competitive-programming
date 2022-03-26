#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k,ans=0;
	cin>>n;
	k=n/2;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
		if(s[i]!='4' && s[i]!='7')
		{
			cout<<"NO";
			return 0;
		}
	for(int i=0;i<k;i++)
		ans+=s[i]-'0';
	for(int i=k;i<n;i++)
		ans-=s[i]-'0';
	if(ans==0)
		cout<<"YES";
	else
		cout<<"NO";

    
}