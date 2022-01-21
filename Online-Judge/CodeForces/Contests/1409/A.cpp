#include <bits/stdc++.h>
#include <math.h>


using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long i;
    long long a,b,sum,last_sum;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        sum = abs(a-b);
        last_sum = sum/10;

        if(sum%10==0)
        {
            printf("%lld\n",last_sum);

        }
        else
        {
            printf("%lld\n",last_sum+1);
        }



    }
}