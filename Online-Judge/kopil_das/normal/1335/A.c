#include<stdio.h>

int main()
{
    int t;
    long long int n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
            ans=(n/2)-1;
        }
        else
            ans=n/2;
        printf("%lld\n",ans);
    }
}