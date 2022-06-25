#include <iostream>
using namespace std;
#define ll long long int
int main()

{
    int t;
    cin >> t;
    ll n;
    while(t--)
    {
        cin >> n;
        int remainder,ans = 0;
        while(n!=0)
        {
            remainder = n%10;
            n = n/10;
            if(remainder==4)
            {
                ans++;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
