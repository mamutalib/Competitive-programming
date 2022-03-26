#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,m,x=0,c,y=0;
    cin>>n;

    while(n--){
    	cin>>m>>c;
    	if(m<c)
    		x++;
    	else if(m>c)
    		y++;
    }
    
    
    if(x>y)
       cout<<"Chris";
   else if(x<y)
   		cout<<"Mishka";
   	else if(x==y)
   		cout<<"Friendship is magic!^^";
   
}