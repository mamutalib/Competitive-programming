#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,s,need;
    long long int arr[10];
    scanf("%lld%lld%lld%lld",&arr[0],&arr[1],&arr[2],&arr[3]);

    need=0;
    for(i=0 ; i<3 ; i++)
        {
            s=0;
            for(j=i+1 ; j<=3 ; ++j)
                {
                    if(arr[i]==arr[j])
                        s++;
                        
                    if(s==3)
                        break;
                }
            if(need<s || need==s)
            {
                need+=s;
            }
            if(s==3)
                break;

        }
    printf("%d",need);

}