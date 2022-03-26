#include<bits/stdc++.h>
using namespace std;


int main(){
    char s[1000];
    gets(s);
    int a=strlen(s),i;
    for(i=a-1;i>=0;i--)
    {
    	if(isalpha(s[i]))
    	{
    		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
    			cout<<"YES";
    		else
    			cout<<"NO";
    		break;
    	}
    }
	
}