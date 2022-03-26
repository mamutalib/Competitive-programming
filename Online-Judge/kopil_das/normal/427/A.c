#include<stdio.h>

int main()
{
    int n,t,ans=0,po=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        if(t==-1 && po==0)
        {
            if(po==0)ans++;
            else
                po--;
        }
        else
            po+=t;
    }
    printf("%d",ans);
}