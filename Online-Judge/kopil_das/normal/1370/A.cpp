#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n,j,max,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        max=n/2;
        if(max<(n-1)/2)
            max=(n-1)/2;
        cout<<max<<endl;

    }
}