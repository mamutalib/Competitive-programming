#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define fo for(int i = 0; i<n; i++)
#define ft for(int i = 0; i<t; i++)
#define wt while(t--)
#define wn while(n--)


void solve(int n){
    int count = 0;
    while(n>=10) {
        n++;
        while(n%10 == 0) {
            n/=10;
        }
        count++;
    }
    cout << count+9 << nl;
}
int main() {
    int n; 
    cin >> n;
    solve(n);
    return 0;
}

//1201A unsolved;