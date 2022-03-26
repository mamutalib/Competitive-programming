#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,ans=0;
    cin>>n;
    getchar();
    char s[n];
    for(int i=0;i<n;i++)
    	{
    		gets(s);
    		int k=0;
    		if(s[0]=='1')
    			k++;
    		if(s[2]=='1')
    			k++;
    		if(s[4]=='1')
    			k++;
    		if(k>=2)
    			ans++;
    	}

   
    	cout<<ans;

    
}