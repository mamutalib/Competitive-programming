#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){

        int n;
        cin >> n;

        string str, str_copy;
        cin >> str;

        str_copy = str;
        sort(str.begin(), str.end());

        int count = 0;

        for(int i = 0; i<n; i++){

            if(str[i]!=str_copy[i]){
                count++;
            }
            else{
                continue;
            }
        }
        cout << count << endl;
    }
}