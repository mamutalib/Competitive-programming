#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;

bool cmp(pair<lg,lg>a,pair<lg,lg>b){
    return a.first>b.first;
}


int main()
{
    lg n,x,t,l,r;
    
    cin>>n;
    vector<pair<lg,lg>> v(n);
    t=x;
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
   sort(v.begin(),v.end(),cmp);
   lg ans=0;
   for (int i = 1; i < n; ++i)
   {
       ans+=(v[i].first*i)+1;
   }
   cout<<ans+1<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<v[i].second<<" ";
    }
    
    
    
    
    return 0;
     
}