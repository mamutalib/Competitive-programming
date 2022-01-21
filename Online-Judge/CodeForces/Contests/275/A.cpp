#include <bits/stdc++.h>
using namespace std;
int arr[6][6];

int main(){
    
  
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            int k = arr[i - 1][j] + arr[i + 1][j] + arr[i][j] + arr[i][j + 1] + arr[i][j - 1];
            if(k%2==0){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        cout<<endl;
    }
    return 0;
    
}