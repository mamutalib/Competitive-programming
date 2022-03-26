#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a1[t],a2[t],x,y,ans;
    for(int i=0;i<t;i++)
    {
    	cin>>a1[i];
    	a2[i]=a1[i];
    }
    sort(a1,a1+t);

    for(int i=0;i<t;i++)
    	{
    		if(a2[i]==a1[0])
    			x=i+1;
    	}
    for(int i=0;i<t;i++)
    	if(a2[i]==a1[t-1])
    			{
    				y=i;
    				break;
    			}
    
	ans=(t-x)+y;
	if(x<=y)
		ans--;
	cout<<ans;
	
}