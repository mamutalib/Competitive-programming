#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int candiBox[n], min;
        for(int i = 0; i<n; i++){
            cin >> candiBox[i];
        }
        min = *min_element(candiBox, candiBox + n);
        int eat = 0;
        for(int i =0; i<n; i++){
            eat = eat + candiBox[i]-min;
        }
        cout << eat << endl;

    }

    return 0;
}

