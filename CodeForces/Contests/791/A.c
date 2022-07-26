#include <stdio.h>
int main()
{
    int a,b,year=0;
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        year++;
    }
    printf("%d\n",year);
    return 0;
}