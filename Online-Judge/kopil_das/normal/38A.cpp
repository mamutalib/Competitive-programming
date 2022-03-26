#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t,a,b,sum=0;
	cin>>t;
	int ar[t];

	for(int i=0;i<t-1;i++)
	{
		cin>>ar[i];
	}
	cin>>a>>b;
	for(int i=a-1;i<b-1;i++)
		sum+=ar[i];
	cout<<sum;

	
		
	

    
}