#include<stdio.h>
int main()
{
    int a,b,i=0;
    scanf("%d%d",&a,&b);
    while(1)
    {
        a*=3;
        b*=2;
        if(a>b)
        {
            i++;
            break;
        }
        else
            i++;
    }
    printf("%d",i);

}