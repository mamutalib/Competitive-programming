#include <bits/stdc++.h>
using namespace std;

int findEven() {
    int low, high;
    cin >> low >> high;
    int odd = (high-low)/2;
    if(low%2!=0 || high%2!=0) {
        odd++;
    }
    return (high-low+1)-odd;
}

int main() {
    cout << findEven() << endl;
}