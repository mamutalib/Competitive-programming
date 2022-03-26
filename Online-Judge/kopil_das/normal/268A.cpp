#include<bits/stdc++.h>
using namespace std;


int main(){
    int x[31],y[31],n,ans=0,a=0,b=0,i,j;
    cin>>n;
    while(n--)
    	cin>>x[a++]>>y[b++];
    for(i=0;i<a;i++)
    {
    	for(j=0;j<a;j++)
    		if(x[i]==y[j] && i!=j)
    			ans++;
    }
    cout<<ans;
}