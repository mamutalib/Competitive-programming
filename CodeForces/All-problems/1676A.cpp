#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[6];
    for (int i = 0; i<t; i++){
        int n;
        cin >> n;
        int one,two,three,four,five,six;
        one = n%10;
        n = n/10;
        two = n%10;
        n = n/10;
        three = n%10;
        n = n/10;
        four = n%10;
        n = n/10;
        five = n%10;
        n = n/10;
        six = n%10;
        if(one+two+three == four+five+six){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
