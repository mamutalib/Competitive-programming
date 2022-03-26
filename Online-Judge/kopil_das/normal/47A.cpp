#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t,n=1,k1,k2,w;
	cin>>t;

	while(n)
	{
		w=(n*(n+1))/2;
		if(w==t)
		{
			cout<<"YES";
			return 0;
		}
		if(w>t)
		{
			cout<<"NO";
			return 0;
		}
		n++;
	}

	
		
	

    
}