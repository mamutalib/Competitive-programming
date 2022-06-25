#include <bits/stdc++.h>
#define ll long long

using namespace std;
void sum_of_maxLCM(ll N)
{
    ll sum = 0,lim = sqrt(N),i;
    for(i=1; i<=lim; i++)
    {
        if(N%i==0)
        {
             if (i == (N / i))
                sum += i;
            else
                sum += (i + N / i);
        }
    }
    printf("%lld\n",sum);


}

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum_of_maxLCM(n);
    }

}
