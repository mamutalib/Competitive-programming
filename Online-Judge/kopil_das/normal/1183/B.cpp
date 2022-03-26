#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int h,w,j,i,n,k,mx,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>h;
            v.push_back(h);
        }
        sort(v.begin(),v.end());
        w=v[0]+k;
        for(i=0;i<n;i++){
            if((abs(v[i]-w)>k))
            {
                cout<<-1<<endl;
                break;
            }
        }
        if(i==n)
            cout<<w<<endl;

        }
       


    
        
}