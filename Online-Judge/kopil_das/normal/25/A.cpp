#include<iostream>

using namespace std;

int main()
{
    int n,i,ev=0,od=0,x,y;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            ev++;
            x=i+1;
        }
        else if(arr[i]%2!=0)
        {
            od++;
            y=i+1;
        }
    }
    if(ev==1)
        {
            cout<<x;
            return 0;
        }
    if(od==1)
        {
            cout<<y;
            return 0;
        }
}