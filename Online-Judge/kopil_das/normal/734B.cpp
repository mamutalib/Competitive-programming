#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int a,b,c,d,mx;
    cin>>a>>b>>c>>d;
    mx=min(a,min(c,d));
    int k=mx*256;
    k+=((min(b,a-mx))*32);
    
   	cout<<k;
   
}