#include <iostream>
using namespace std;
int f(int n)
{
    while(n>=10)
        n = n/10;

    return n;
}
int l(int n)
{
    return n%10;
}

int main()
{
    int n,first,last,t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        cout << f(n)+l(n) << endl;
    }
}
