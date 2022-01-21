#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int coin[n], sum1 = 0, sum2 = 0, count = 0;
    for (int i = 0; i<n; i++){
        cin >> coin[i];
        sum1+=coin[i];
    }
    sum1 = sum1/2;
    sort(coin, coin+n);
    sort(coin,coin+n);
    for(int i = n-1; i>=0; i--){
        sum2 = sum2+coin[i];
        count++;
        if(sum1<sum2){
            break;
        }
    }
    cout << count << endl;
}