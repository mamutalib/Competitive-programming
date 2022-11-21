
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
    long long int t,i,j,n,d;
    string s;
    cin >> t;
    wt{
        cin >> n;
       long long int a[n], b[n];
       fn{
        
        cin >> a[i];
        b[i] = a[i];

       }
       sort(b, b+n);
       d = b[n-1];
       j = b[n-2];

       fn{
        if(a[i]==d) cout << d-j <<" ";
        else cout<< a[i]-d<<" ";
       }
       cout <<endl;

    }

}

int main() {
    solve();

    
    return 0;
}


