#include <bits/stdc++.h>
using namespace std;

int findOdd(){
    int low, high;
    cin >> low >> high;

    int odd = (high-low) / 2;
    if(low%2!=0 || high%2!=0) {
        odd++;
    }
    return odd;
}

int main() {
    int ans = findOdd();
    cout << ans << endl;
    return 0;
}
