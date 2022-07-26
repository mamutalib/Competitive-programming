#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int stairs[n],count = 0;
    for(int i=0; i<n; i++) {
        cin >> stairs[i];
        if(stairs[i]==1) {
            count++;
        }
    }
    std :: cout << count << endl;

    for(int i=0; i<n; i++) {
        if(stairs[i]==1 && i>0)
        {
            cout << stairs[i-1] <<" ";
        }
    }

    cout << stairs[n-1];

    return 0;

}