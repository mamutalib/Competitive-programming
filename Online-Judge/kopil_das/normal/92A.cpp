#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define For(a,b) for(int i=a;i<)


int main(){
	int i=1,s,k;
	
	cin>>s>>k;

	while(k>=i)
	{
		k-=i;
		i++;
		if(i==(s+1))
			i=1;
	}
	cout<<k;

    
}