#include<bits/stdc++.h>
using namespace std;
//#define mx 20000


int main(){
    int t,x,y,i;
    cin>>t;
    int mx=INT_MAX;
	int ar[t],tem[t];
	for(i=0; i<t;i++)
		cin>>ar[i];
	for(i=0; i<t-1;i++)
	{
		x=abs(ar[i]-ar[i+1]);
		if(mx>x)
		{
			mx=x;
			y=i;
		}
	}
	x=abs(ar[i]-ar[0]);
		if(mx>x)
		{
			mx=x;
			y=i;
		}

	if(y==t-1)
		cout<<y+1<<" "<<1;
	else
		cout<<y+1<<" "<<y+2;
	
}