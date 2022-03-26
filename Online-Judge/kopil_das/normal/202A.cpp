#include<bits/stdc++.h>
using namespace std;


int main(){
	char n[101];
    gets(n);
    getchar();
    int k=strlen(n),b=0,i,ans=0;
    sort(n,n+k);
    for(i=0;i<k;i++)
    	{
    		if(n[i]==n[k-1])
    			ans++;

    	    }

   
    for(i=0;i<ans;i++)
    	cout<<n[k-1];

    
}