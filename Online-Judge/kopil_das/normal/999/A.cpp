#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,i,j;
    scanf("%d%d",&n,&p);
    int ar[n];
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    for(i=0; p>=ar[i]; i++){}
    if(i!=n)
    for(j=n-1; p>=ar[j]; j--){
        i++;
    }
    printf("%d",i);
}