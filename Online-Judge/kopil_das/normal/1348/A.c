#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,i,n,j,min;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int co[n],diff[n];
        for(j=0;j<n;j++)
        {
            co[j]=pow(2,j+1);
        }
        min=0;
         for(j=0;j<n;j++)
         {
            min+=co[j];
         }
         printf("%d\n",(min/(n+1)));
    }
}