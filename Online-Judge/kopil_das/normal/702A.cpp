#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,m,x=0,c=1,y=1,i=2,z;
    cin>>n;
    cin>>x;
    n--;
    while(n--){
    	cin>>m;
    	
    	if(x<m)
    		{
    			y++;
    			if(c<y)
    				c=y;
    		}
    	else
    		y=1;
    	x=m;
    }
    
    
    
   		cout<<c;
   
}