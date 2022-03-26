#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		int res[n],tem=n-1;
		int k=1;
		res[0]=ar[0];
		for(int i=1;i<n;i++)
		{
			
				if(i%2!=0)
				{
					res[i]=ar[n-k];
					k++;
				}
				else
				res[i]=ar[i/2];

			
		}
		for(int i=0;i<n;i++)
			cout<<res[i]<<" ";
		cout<<endl;
	}
}