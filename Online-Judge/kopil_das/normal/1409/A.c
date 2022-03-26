#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long long int t,a,b,tem,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        ans=abs(a-b);
        tem=(ans/10);
        if(ans%10!=0)
            printf("%lld\n",tem+1);
        else
            printf("%lld\n",tem);
    }
}