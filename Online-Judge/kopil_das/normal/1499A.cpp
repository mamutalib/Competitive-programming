#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t,n,k1,k2,w,b;
	cin>>t;



	while(t--){
		cin>>n>>k1>>k2;
		cin>>w>>b;
		int x=k1+k2;
		int y=(n-k1)+(n-k2);
		if(w*2<=x && b*2<=y)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}

		
	

    
}