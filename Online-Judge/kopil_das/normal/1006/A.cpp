#include<iostream>

using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    ll arr[t];
    for(int i=0; i<t ; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            arr[i]-=1;
    }
    for(int i=0; i<t ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}