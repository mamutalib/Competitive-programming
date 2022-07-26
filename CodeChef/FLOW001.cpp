#include <iostream>
using namespace std;

int add()
{
    int a,b;
    cin>>a>>b;
    return  a+b;
}
int main()
{
    int n,i;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cout<<add()<<endl;
    }

}
