#include<stdio.h>
int main()
{
    int n,i,t,k,odd,evn;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d%d",&n,&k);
        if(n>=k)
        {
            if(n==k && n/k>0)
                {
                    printf("YES\n");
                        for(i=0;i<k;i++)
                            printf("%d ",n/k);

                    printf("\n");
                }
            else
            {
                odd=n-(k-1);
                evn=n-((k-1)*2);
                if(odd%2!=0 && odd>0)
                {
                    printf("YES\n");
                    for(i=0;i<k-1;i++)
                        printf("1 ");

                    printf("%d\n",odd);
                    continue;
                }
                else if(evn%2==0 && evn>0)
                {
                    printf("YES\n");
                    for(i=0;i<k-1;i++)
                        printf("2 ");

                    printf("%d\n",evn);
                    continue;
                }

                printf("NO\n");
            }

        }
        else
            printf("NO\n");
    }
}