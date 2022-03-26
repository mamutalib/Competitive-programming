#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool isp(int num);


int main(){
	int n,m;
	cin>>n>>m;



	while(!(isp(++n))){}

		if(n==m)
			cout<<"YES";
		else
			cout<<"NO";
	

    
}

bool isp(int num){
	bool f= true;
	for(int i=2;i<=num/2;i++)
		if(num%i==0)
		{
			f=false;
			break;
		}

	return f;
}