#include<iostream>
#include<stdlib.h>

typedef long long int ll;
int main()
{
    ll t,n,d,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll arr[n];
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        for(i=1;i<n;i++)
        {
            if(arr[i-1]<=arr[i])
                {
                    printf("YES\n");
                    break;
                }
        }
        if(i==n)
            printf("NO\n");
    }
}