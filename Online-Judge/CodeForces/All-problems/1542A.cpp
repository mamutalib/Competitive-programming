#include <bits/stdc++.h>
using namespace std;
int main(){

    int test;
    cin >> test;
    while(test--){

        int n;
        cin >> n;
        int num[2*n];
        int count = 0;
        for(int i = 0; i<n*2; i++){
            cin >> num[i];
            if(num[i]%2==1){
                count++;
            }
        }

        if(count == n){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}