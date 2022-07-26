#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define fo for(int i = 0; i<n; i++)
#define ft for(int i = 0; i<t; i++)
#define wt while(t--)
#define wn while(n--)


void solve(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    if(m*a<=b) {
        cout << n*a << nl;
    }
    else {
        cout << (n/m) * b+min((n%m)*a,b) << nl;
    }
    // int mRide = n*a;
    // int oneRide = m*b;
    // if (mRide<oneRide){
    //     cout << mRide << nl;
    // }
    // else{
    //     cout << oneRide << nl;
    // }
}

int main() {
   
    solve();
    return 0;
}

