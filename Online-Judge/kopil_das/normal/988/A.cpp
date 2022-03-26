#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,p;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int c=0;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j] && arr[j]!=0)
                    {
                        arr[j]=0;
                        c++;
                    }
        }
    p=n-c;
    c=1;
    if(p>=k)
        {
            printf("YES\n");
            for(i=0; i<n; i++)
                if(arr[i]!=0)
                    {
                        printf("%d ",i+1);
                        if(c++==k)
                            break;
                    }
        }
    else
        printf("NO\n");

}