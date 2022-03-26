#include<bits/stdc++.h>
using namespace std;
#define mx 20000


int main(){
    string s,s2;
    cin>>s>>s2;
    
	int x,y,j,i;
	x=s.size();
	y=j=s2.size();
	if(x!=y)
		cout<<"NO";
	else
	{
		for(i=0;i<x;i++)
		{
			if(s[i]!=s2[--j])
				break;
		}
		if(i==x)
			cout<<"YES";
		else
			cout<<"NO";
			
	}
}