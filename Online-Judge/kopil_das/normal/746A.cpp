#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<1 || b<2 || c<4)
{
	cout<<0;
	return 0;
}
int br=b/2;
int cr=c/4;
int m=min(br,cr);
if(m<=a)
	cout<<m+(m*2)+(m*4);
else
	cout<<a+(a*2)+(a*4);
}