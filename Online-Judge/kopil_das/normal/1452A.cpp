#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,x,y;
    cin>>t;
	while(t--)
		{
			cin>>x>>y;
			if(x!=y)
				cout<<max(x,y)*2-1<<endl;
			else
				cout<<x+y<<endl;

		}
	
		
	
}