#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[1000];
        int EvenSum = 0, OddSum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(i%2==1)
            {
                OddSum = OddSum+arr[i];

            }
            else
            {
                EvenSum = EvenSum+arr[i];
            }
        }

        cout << EvenSum-OddSum <<endl;
    }
}
