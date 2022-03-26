#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000000; //BIG LOOOOOOOOOL
lg ar[N];
 
int main()
{
    lg n,x,y,i,j,B,k,ai,sum=0,c,r,cnt;
    cin>>k;
    while(k--)
    {
        cin>>n;
        vector<lg>v ;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }
        lg mxind=max_element(v.begin(),v.end()) - v.begin();
        lg mnind=min_element(v.begin(),v.end()) - v.begin();
        cout<<mnind+1<<" "<<mxind+1<<endl;
    }

    return 0;
}