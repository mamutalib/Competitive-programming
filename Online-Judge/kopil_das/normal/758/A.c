#include<stdio.h>
int main()
{
    int n,i,sum=0,j,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
     for(i=1;i<n;i++)
     {
         if(max<a[i])
            max=a[i];
     }
      for(i=0;i<n;i++)
      {
          j=0;
          if(a[i]!=max)
            j=max-a[i];
          sum+=j;
      }
      printf("%d",sum);

}