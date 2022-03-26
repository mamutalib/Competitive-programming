#include<stdio.h>

int main()
{
    int t,n,i,j,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        d=2*n;
        int arr[d];
        for(i=0; i<d; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<d; i++)
            for(j=i+1; j<d; j++)
                if(arr[i]==arr[j])
                    arr[j]=0;

        for(i=0; i<d; i++)
            if(arr[i]!=0)
                printf("%d ",arr[i]);
        printf("\n");
    }
}