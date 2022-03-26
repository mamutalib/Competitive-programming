#include <stdio.h>

int main()
{
    int i,j,n,num=1,max=num;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++)
    {
        if(ar[i]==ar[j])
        {
            num++;
            if(num>max)
            max=num;
        }
    }
    num=1;
    }
    printf("%d",max);

    return 0;
}