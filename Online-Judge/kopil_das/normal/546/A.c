#include<stdio.h>
int main()
{
    int k,w,i,b,n,j,sum=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        j=i*k;
        sum+=j;
    }
    b=sum-n;
    if(b<0)
        printf("0\n");
    else
        printf("%d\n",b);

}