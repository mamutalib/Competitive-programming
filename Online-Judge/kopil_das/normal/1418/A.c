#include <stdio.h>
#include<math.h>
int main()
{
    long long t,x,y,k,stick,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&x,&y,&k);
        a=(k*y)+k-1;
        b=x-1;
        stick=(a+b-1)/b;
        stick+=k;
        printf("%lld\n",stick);
    }
    return 0;
}