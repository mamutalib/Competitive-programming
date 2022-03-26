#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    b=a;
    for(i=1;i<=b;i++)
    {
        if(i%2==0)
            printf("I love ");
        else
            printf("I hate ");
        a--;
        if(a==0)
            printf("it");
        else
            printf("that ");
    }
}