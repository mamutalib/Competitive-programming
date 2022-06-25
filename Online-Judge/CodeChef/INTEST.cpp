#include <iostream>
using namespace std;
int main(void)

{
    int n,k;
    cin>>n>>k;
    long long i,count=0,t;
    for(long long i=1; i<=n; i++)
    {
        cin>>t;
        if(t%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
