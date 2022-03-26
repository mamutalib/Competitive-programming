#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	

	ll t,x,n,b,c,k,i;
	scanf("%lld",&t);
	while(t--){
		cin>>n;
		int ar[n],k=0;


		for(i=0;i<n;i++)
			{cin>>c;
			if(c==1 || c==3)
				k++;
			}
			cout<<k<<endl;
	}

	
return 0;
}