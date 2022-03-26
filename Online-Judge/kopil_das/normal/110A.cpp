#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define For(a,b) for(int i=a;i<)


int main(){
	int i,j,k=0;
	string s;

	cin>>s;
	j=s.size();

	for(i=0;i<j;i++)
	{
		if(s[i]=='4'||s[i]=='7')
			k++;

	}
	if(k==4 || k==7)
		cout<<"YES";
	else
		cout<<"NO";

    
}