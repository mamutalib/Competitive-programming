#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k;
    cin>>k;

   while(k--){
    int n,m;
    cin>>n;
    vector<int>vc;
    for (int i=0;i<n;i++)
        {
            cin>>m;
            vc.push_back(m);}
           
        sort(vc.begin(),vc.end());
        
        int a=abs(vc[(n/2)-1]-vc[n/2]),b;
        int mn=a;
        if(n>2)
            {
                b=abs(vc[(n/2)+1]-vc[(n/2)]);
                mn=min(a,b);
            }
        cout<<mn<<endl;
   }
   
}