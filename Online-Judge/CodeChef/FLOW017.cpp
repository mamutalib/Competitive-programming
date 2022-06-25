#include <iostream>
using namespace std;
int second(int a,int b,int c)
{
    if(a>b && b>c)
    {
        return b;
    }
    else if(a>c && c>b )
    {
        return c;
    }
    else if(b>a && a>c)
    {
        return a;
    }
    else if(b>c && c>a)
    {
        return c;
    }
    else if(c>a && a>b)
    {
        return a;
    }
    else if(c>b && b>a)
    {
        return b;
    }
}
int main()
{
    int t;
    cin >> t;
    int a,b,c;
    while(t--)
    {
        cin >> a >> b >> c;
        int ans = second(a,b,c);
        cout<<ans<<endl;

    }
}

