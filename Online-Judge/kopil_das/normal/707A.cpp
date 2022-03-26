#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,m,x=0,i,j,c=0,blk=0;
    cin>>n>>m;
    char ar[n][m];
    
    for(i=0;i<n;i++){
       for(j=0;j<m;j++)
       {
          cin>>ar[i][j];
          if(ar[i][j]=='C' || ar[i][j]=='M' || ar[i][j]=='Y')
          	x=1;
         
       }
       
    }
    if(x==0)
       cout<<"#Black&White";
   else
   		cout<<"#Color";
   
}