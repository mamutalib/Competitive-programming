#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;

    int array[n];
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    int check;

    sort(array,array+n);

    for(int i=0; i<=n; i++)
    {
        if(array[i]!=i+1)
        {
           check = i+1;
           break;
        }
    }

    std :: cout << check;
}