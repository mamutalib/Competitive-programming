#include<stdio.h>
int main()
{
    int n,i,k,rou=0;
    scanf("%d%d",&n,&k);
    int po[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&po[i]);
    }
    for(i=0;i<k;i++)
    {
        if(po[i]>0)rou=1+i;
    }
    if(rou==k)
    {
        while(1)
        {
            if(k==n)break;
            if(po[k]>=po[k-1])
                rou=++k;
            else
                break;
        }
    }
    printf("%d",rou);
}