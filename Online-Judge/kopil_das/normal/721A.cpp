#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	int n,i,k=0,j=0,xx=0;
	cin>>n;
	int ar[n];
	string s;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='B')
			k++;
		else
			{
				if(k!=0)
				ar[xx++]=k;
				else j++;
			k=0;
		}
	}
	if(n==j || n==k || k!=0)
	ar[xx++]=k;

	if(xx!=0 && ar[xx-1]!=0)
		cout<<xx<<endl;

	for(i=0;i<xx;i++)
		cout<<ar[i]<<" ";
	
	

}