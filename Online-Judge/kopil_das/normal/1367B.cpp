#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k,n;
    cin>>k;

   while(k--){
    scanf("%lld",&n);   
    int arr[n],o=0,e=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];

   for(int i=0;i<n;i++)
   {
        if(arr[i]%2!=(i%2))
         {
            if(i%2==0)
             o++;
            else e++;
         }
   }
   if(o!=e)cout<<-1<<endl;
   else
        cout<<o<<endl;
   }
   
}