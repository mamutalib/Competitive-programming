#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<long long int>v;
    long long int a,b,c,n,ans;
    cin>>n;
    while(n--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        ans=(((v[0]+v[1])-1)+v[2])-1;
        cout<<ans<<endl;
        v.clear();
    }
}