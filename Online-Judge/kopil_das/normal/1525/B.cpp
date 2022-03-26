#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll kr,n,u1,p;
    
    

    cin>>kr;
    while(kr--)
    {
        cin>>n;
        int ar;
        bool t=false;
        vector<int>v,v1;
        for(int i=0;i<n;i++)
        {
            cin>>ar;
            v.push_back(ar);
            v1.push_back(ar);
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v1[i])
                t=true;
        }
        if(!t)
        {
            cout<<0<<endl;
            continue;
        }
        
        
        int min=*min_element(v.begin(),v.end());
        int mx=*max_element(v.begin(),v.end());
        if((v[0]==min || v[n-1]==mx))
            cout<<1<<endl;
        else if( (v[0]==mx && v[n-1]==min))
            cout<<3<<endl;
        else
            cout<<2<<endl;
        
    }

    return 0;
}