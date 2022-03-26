#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N=1000;

bool cmp(pair<lg,lg>a,pair<lg,lg>b){
    return a.first>b.first;
}


int main()
{
    lg n,x,t,l,r,k;
    
    cin>>n>>k;
    vector<pair<lg,lg>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i].first;
    }
   sort(v.begin(),v.end(),cmp);
   lg ans=0;
   
   cout<<v[k-1].first<<endl;
    
    
    
    
    return 0;
     
}