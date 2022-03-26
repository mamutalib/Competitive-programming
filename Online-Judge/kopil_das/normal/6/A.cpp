#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>v;
    int i,x;
    for(i=0;i<4;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[3]<v[2]+v[1] || v[2]<v[0]+v[1])
        cout<<"TRIANGLE";
    else if(v[3]==v[2]+v[1] || v[2]==v[0]+v[1])
        cout<<"SEGMENT";
    else
        cout<<"IMPOSSIBLE";
}