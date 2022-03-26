#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	

	ll t,r,k,i;
	cin>>k>>r;
	
		for(i=1;i<=10;i++)
			{	
				if((i*k)%10==0 || (i*k)%10==r)
				{
					cout<<i<<endl;
					return 0;
				}
			}
			
	

	return 0;

}