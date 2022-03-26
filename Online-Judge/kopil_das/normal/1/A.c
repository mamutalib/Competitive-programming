#include<stdio.h>
int main()
{
    long long int a,b,c,m,n;
    scanf("%lld%lld%lld",&a,&b,&c);
    m=a/c;
    n=b/c;
    if(a%c!=0)m++;
    if(b%c!=0)n++;
    printf("%lld",n*m);
}