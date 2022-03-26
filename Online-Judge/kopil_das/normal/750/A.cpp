#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,cou,p;
    scanf("%d%d",&n,&k);
    t=240-k;
    cou=0;
    p=0;
    for(int i=1; i<=n; i++)
    {

        if((p+=(i*5))<=t)
         cou++;
    }
    printf("%d",cou);

}