#include <stdio.h>
int main()
{
    int n,k,i;
    int a[150];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int next=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            next++;
        }
    }
    printf("%d\n",next);
}