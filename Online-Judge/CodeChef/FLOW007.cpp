#include <iostream>
#include <string.h>
#define max 1000000

using namespace std;

int reverse(int n)
{
    int revers = 0,remainder;
    while(n!=0)
    {
        remainder = n%10;
        revers = revers*10 + remainder;
        n = n/10;
    }
    return revers;
}

int main()
{
    int t;
    cin >> t;
    int num ;
    while(t--)
    {
        cin >> num;
        cout << reverse(num)<<endl;
    }
    return 0;
}
