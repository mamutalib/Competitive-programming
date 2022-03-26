#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a1[t],a2[t];
    for(int i=0;i<t;i++)
    {
    	cin>>a1[i];
    	a2[a1[i]-1]=i+1;
    }
    for(int i=0;i<t;i++)
    	cout<<a2[i]<<" ";
	
}