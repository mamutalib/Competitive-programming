#include<stdio.h>
struct photo
{
    long long int need,poss;
};

int main()
{
    long long int n,a,b,x,y,i,j,count=0,d;

    scanf("%lld",&n);
    struct photo cli[n];

    scanf("%lld",&d);
    scanf("%lld",&a);
    scanf("%lld",&b);

    for(i=0; i<n; i++)
    {
        scanf("%lld",&x);
        scanf("%lld",&y);
        cli[i].need=(a*x)+(b*y);
        cli[i].poss=i+1;
    }

    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            {
                if(cli[j].need > cli[j+1].need)
                {
                    struct photo temp;
                    temp.need=cli[j].need;
                    temp.poss=cli[j].poss;

                    cli[j].need=cli[j+1].need;
                    cli[j].poss=cli[j+1].poss;

                    cli[j+1].need=temp.need;
                    cli[j+1].poss=temp.poss;
                }
            }
    for(i=0; i<n; i++)
    {
        if(d>=cli[i].need)
            count++;
        d=d-cli[i].need;
    }
    printf("%lld\n",count);
    for(i=0; i<count; i++)
        printf("%lld ",cli[i].poss);

}