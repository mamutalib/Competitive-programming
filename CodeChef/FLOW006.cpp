#include <iostream>
using namespace std;

int SumOfDigit(int n)
{
    int i,sum = 0 ;
    while(n!=0)
    {
        sum = sum+n%10;
        n = n/10;
    }
    return sum;
}

int main(void)
{
    int n,num,sum;
    cin>>n;
    while(n--)
    {
        cin>>num;
        sum = SumOfDigit(num);
        cout<<sum<<endl;

    }
}
