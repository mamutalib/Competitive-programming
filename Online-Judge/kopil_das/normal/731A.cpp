#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	string s;
	cin >>s;
	int x,a=s.size();
	x=min(abs('a'-s[0]),(26-abs('a'-s[0])));
	for(int i=0;i<a-1;i++)
	{
		x+=min(abs(s[i]-s[i+1]),(26-abs(s[i]-s[i+1])));
	}
	cout<<x;
	return 0;

}