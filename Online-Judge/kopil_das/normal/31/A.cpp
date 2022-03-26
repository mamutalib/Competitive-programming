#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    int n,i,j,k,value;
    cin>>n;
    int x=n;
    while(x--)
    {
        cin>>value;
        v.push_back(value);
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            {
                if(i==j)j++;
                for(k=j+1;k<=n-1;k++)
                {
                    if(k==i)k++;
                    if(k==n)break;
                    if(v[i]==v[j]+v[k])
                    {
                        cout<<i+1<<" "<<k+1<<" "<<j+1;
                        return 0;
                    }
                }
            }
    cout<<"-1";
}