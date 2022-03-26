#include<stdio.h>

int main()
{
    long long int a,b,c,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(a%b==0)
            printf("0\n");
		else
            printf("%d\n",b-a%b);
    }
}