#include <iostream>
using namespace std;
#define ll long long int


int main(){

    int t;
    cin >> t;

    while(t--){
        ll c;//candies
        cin >> c;
   //     ll a,b,count = 0;
     //   ll len = c/2;
        /*for(b=1,a=c-1; b<=len; b++,a--)
        {
            if(a>0 && b>0 && a>b)
            {
                if(a+b == c)
                {
                    count++;
                }
            }
        }*/
        ll ans = --c/2;
        cout << ans <<endl;

    }
    return 0;
}