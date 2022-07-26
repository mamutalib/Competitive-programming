#include <iostream>
using namespace std;
int N,M;
 
void solve()
{
   int ans = 0;
   cin >> N >> M;
   for (int a = 0; a <= 2000; a++){
        for (int b = 0; b <= 2000; b++){
            if (a * a + b == N && b * b + a== M) {
                ans++;
            }
        }
   }
   cout << ans;
}
 
int main()
{
    solve();
    return 0;

    
}