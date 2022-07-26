#include<bits/stdc++.h>
#define ll long long
ll arr[1000005];
using namespace std;


int main(){

     ll t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         ll ans=0;
         for(int i=1;i<n;i++){
             ans=max(ans,arr[i]*arr[i-1]);
         }
         cout<<ans<<endl;
     }
    return 0;
}