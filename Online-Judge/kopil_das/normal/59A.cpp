#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t,n=0,k1,k2,w;
	string a,b,c;
	cin>>a;
	t=a.size();
	for(int i=0;i<t;i++)
	{
		if(a[i]<='Z' && a[i]>='A')
			n++;
		else
			n--;
	}
	if(n<=0)
		for(int i=0;i<t;i++)
			putchar(tolower(a[i]));
	else
		for(int i=0;i<t;i++)
			putchar(toupper(a[i]));

	
		
	

    
}