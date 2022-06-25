#include <iostream>
#define charge 0.50

using namespace std;
int main(void)
{

    int withdraw;
    float balance;

    cin>>withdraw>>balance;

    if((withdraw%5==0)&&(balance>(withdraw+charge)))
    {
        //withdraw is multiple of 5 and;
        //checking the balance is enough or not for withdraw;
        cout<<balance-withdraw-charge;
    }
    else
    {
        cout<<balance;
    }
    return 0;

}
