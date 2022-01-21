#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int n;
        cin >> n;
    
        int sum = 0;
        while(n>0){
        sum = max(sum,n%10);
        n = n/10;
        }
        cout << sum << endl;
    }
}