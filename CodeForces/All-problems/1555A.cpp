#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    ll ans;
    while(t--){
        ll n;
        cin >> n;
        if(n<=6){
            ans = 15;
        }
        else{
            if(n%2!=0){
               n++; 
            }
            ans = (n*5)/2;
            
        }
        
        
        cout << ans << endl;
    }
    return 0;
}