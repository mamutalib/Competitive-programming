#include<stdio.h>
#include <stdlib.h>
int main()
{ 
    int a[5][5],i,j,k,l;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                k=i;
                l=j;
            }
        }
    }
        k++;
        l++;
    k=abs(3-k);
    l=abs(3-l);
    printf("%d",k+l);
}