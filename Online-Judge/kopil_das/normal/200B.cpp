#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,m,x=0,c=1,y=1,i=2,z;
    cin>>n;
    
    for(i=0;i<n;i++){
    	cin>>m;
    	x+=m;
    }
    double f=double(x)/double(n);
    
   	printf("%.12lf",f);
   
}