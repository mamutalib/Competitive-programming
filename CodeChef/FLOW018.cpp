#include <iostream>
using namespace std;
long long factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}
int main()
{
    int t;
    cin >> t;
    int a;
    while(t--)
    {
        cin >> a ;
        long long ans = factorial(a);
        cout<<ans<<endl;

    }
}
