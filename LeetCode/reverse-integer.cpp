
/* 
    Md. Abdul Mutalib
    B.Sc (Engg.) in CSE
    North East University Bangladesh

    Connect with me:
    Github: @mamutalib
*/



#include <bits/stdc++.h>
using namespace std;

using ll = long long ;
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

// int reverse(int x) {
//     int rev = 0;
//     while (x != 0) {
//         int last_digit = x % 10;
//         x /= 10;
//         if (rev > INT_MAX/10 || (rev == INT_MAX/10 && last_digit > 7)) return 0;
//         if (rev < INT_MIN/10 || (rev == INT_MIN/10 && last_digit < -8)) return 0;
//         rev = rev*10 + last_digit;
//     }
//     return rev;
// }

// This approach is more easier than previous one: 
int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            if (rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
            rev = rev*10 + x % 10;
            x /= 10;
        }
        return rev;
    }


int main() {
    int n;
    cin >> n;
    int rev = reverse(n);
    cout << rev << endl;

    return 0;
}

