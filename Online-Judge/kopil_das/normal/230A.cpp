#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int s,n,a=0,b,c,d,x,y;
    cin>>s>>n;
        pair <int,int> drg[n];
    for(int i=0;i<n;i++)
    	cin>>drg[i].first>>drg[i].second;

    sort(drg,drg+n);

    for(int i=0;i<n;i++)
    	{
    		if(s<=drg[i].first)
    		{
    			cout<<"NO";
    			return 0;
    		}
    		s+=drg[i].second;
    	}
    	cout<<"YES";

    
}