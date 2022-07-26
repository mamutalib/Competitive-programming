#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int friendday[n],count=0;
        for(int i=0; i<n; i++) {
            cin >> friendday[i];
        }

        sort(friendday,friendday+n);

        for(int i=0; i<n; i++) {
            if(friendday[i]!=friendday[i+1]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
