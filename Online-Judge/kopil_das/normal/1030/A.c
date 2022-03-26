#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&n);
        if(n==1)
            break;
    }
    if(n==0)
        printf("EASY");
    else if(n==1)
        printf("HARD");

}