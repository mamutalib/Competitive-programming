
/* 
    Md. Abdul Mutalib
    B.Sc (Engg.) in CSE
    North East University Bangladesh

    Connect with me:
    Github: @mamutalib
*/



#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long 
#define ld long double
#define nl '\n'
#define fn for(int i = 0; i<n; i++)
#define ft for(int i = 0; i<t; i++)
#define wt while(t--)
#define wn while(n--)
#define fs first
#define f first
#define s second
#define pf printf
#define sc scanf

// void solve(){
//     int t,n;
//     cin >> t >> n;
//     wt{
//         int pass[n];
//         fn{
//             cin >> pass[i];
//         }


//     }
// }
void solve() {
    int t;
    cin >> t;
    wt{
        int n; 
        cin >> n;
        while(n!=0){
            if(n%2!=0){
                cout << 7;
                n = n-3;
            }
            else {
                cout << 1 ;
                n = n-2;
            }
        }
        cout << nl;
    }
}

int main() {
    solve();
}


