
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
    long long int t, m[3], n, d;
    string s;
    cin >> t;
    wt{
        cin >> n;
        cin >> s;
        sort(s.begin(), s.end());
        d = s[n-1]-'a';
        cout << d+1 << endl;

    }

}

int main() {
    solve();

    
    return 0;
}


