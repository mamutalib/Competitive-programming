#include <stdio.h>

int main()
{
    int i,t,sum1=0,sum2=0,sum3=0,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1==0&&sum2==0&&sum3==0)
        printf("YES");
    else
        printf("NO");
}