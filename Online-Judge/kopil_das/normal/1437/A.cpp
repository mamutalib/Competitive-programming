#include<iostream>

using namespace std;

int main()
{
    int t;
    long long int l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        r++;
        if((l%r)>=(float)(r/2.0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}