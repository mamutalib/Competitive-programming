#include<algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n=3,a[n];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+n);
    int res=(a[2]-(a[1]+a[0]))+1;
    if(res<0)
        cout<<0;
    else
        cout<<res;

    return 0;
}