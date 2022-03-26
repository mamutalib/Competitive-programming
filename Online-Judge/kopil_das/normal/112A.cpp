#include<bits/stdc++.h>
using namespace std;


int main(){
    char s[1000],s2[1000];
    gets(s);
    gets(s2);
    int a=strlen(s),b=strlen(s2),i,t=a;
    if(a!=b)
    	t=a+b;
    for(i=0;i<t;i++)
    {
    	if(s[i]<97)
    		s[i]+=32;
    	if(s2[i]<97)
    		s2[i]+=32;
    }
    cout<<strcmp(s,s2);
   
	
}