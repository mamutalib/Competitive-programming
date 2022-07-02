#include <bits/stdc++.h>
using namespace std;

int odd(int a,int b) {
    int odd = (b-a)/2;
    if(a%2!=0 || b%2!=0) {
        odd++;
    }
    return odd;
}
int even(int a,int b) {
    return (b-a+1)-odd(a,b);
}

int main() {
    int low, high;
    cin >> low >> high;

    int odds = odd(low, high);
    int evens = even(low,high);
    cout <<"odd = "<< odds << endl;
    cout << "even = "<< evens << endl;
}