#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,i,ans=0;
    string n,k;
    cin>>n>>k;
   	for(i=0; k[i];i++)
   		if(n[ans]==k[i])
   			ans++;
	cout<<ans+1;
}