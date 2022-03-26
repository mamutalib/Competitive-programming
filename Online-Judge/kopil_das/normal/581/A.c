#include<stdio.h>
int main()
{
    int a,b,tem,ans,day;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        tem=a;
        a=b;
        b=tem;
    }
    ans=b;
    day=(a-ans)/2;
    printf("%d %d",ans,day);
}