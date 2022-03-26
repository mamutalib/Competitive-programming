#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	int n,i,a,b,c,k=1,x=0;
	cin>>n>>c;
	cin>>a;
	for(i=0;i<n-1;i++)
	{
		cin>>b;
		if(b-a<=c)
			{
				k++;
				a=b;}
		else
		{
			k=1;
			a=b;
		}
		
	}
	cout<<k;
	
	

}