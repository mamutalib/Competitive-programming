#include<bits/stdc++.h>
using namespace std;


int main(){
	char n[101],ans=0;
    gets(n);
    getchar();
    int k=strlen(n);
    sort(n,n+k);
    int j=1;
    for(int i=0;i<k;i++)
    	{
    		if(n[i]!=n[j])
    		{
    			j++;
    			ans++;
    		}
    		else
    			j++;
    	}

   
    if(ans%2==0)
    	cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    
}