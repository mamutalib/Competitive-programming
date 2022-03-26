#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,i,j,ar[102][102],ans=0;
	cin>>n;
	int mid=(n-1)/2;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>ar[i][j];
			if(n<5)
				ans+=ar[i][j]; 
			else
			{
				if(i==mid && (i!=j))
					ans+=ar[i][j];
				else if(i==j && (i!=mid || j!=mid))
					ans+=ar[i][j];
				else if((i+j)==(n-1) && (i!=mid || j!=mid))
					ans+=ar[i][j];
				else if(j==mid)
					ans+=ar[i][j];
			}

		}

	cout<<ans;

    
}