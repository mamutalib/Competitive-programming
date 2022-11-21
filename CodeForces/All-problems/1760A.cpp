
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


void solve() {
    int t;
    cin >> t;
    ft{
       int a,b,c;
       cin >> a >> b >> c;
       
       if((a<b && b<c) || (c<b && b<a)) cout << b << endl;
       else if ((b < a && a<c) || (c<a && a<b)) cout << a << endl;
       else cout << c << endl;
    }

}

int main() {
    solve();
}


