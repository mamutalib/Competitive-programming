#include <stdio.h>

int main()
{
    int t,i,temp,point=0,j,sum=0;
    scanf("%d",&t);
    int arr[t],b[t];
    for(i=0;i<t;i++)
    {
         scanf("%d%d",&arr[i],&b[i]);
    }
        for(i=0; i<t; i++)
    {
        for(j=i+1; j<t; j++)
        {
            if((b[i] < b[j])||(arr[i] < arr[j]))
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0; i<t; i++)
        sum+=b[i];
    if(sum>t)sum=t-1;
    else if(sum==t)sum--;
    for(i=0; i<sum+1; i++)
    {
        point+=arr[i];
    }

    printf("%d",point);

    return 0;
}