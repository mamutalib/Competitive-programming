#include<iostream>
using namespace std;

int main()
{
    int n,i,count=0,max=0,j;
    cin >> n;

    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j])
                count++;
        }
        if(count>max)
            max=count;
        count=0;
    }
    cout<<max;
}