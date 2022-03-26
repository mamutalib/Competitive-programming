#include<iostream>
using namespace std;

int main(){
    int x,y,i,j;
    cin>>x>>y;
    char arr[x][y];
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            {
                cin>>arr[i][j];
            }
    for(i=0;i<x;i++)
    {
        if(arr[i][0]==arr[i+1][0])
        {
            cout<<"NO";
            return 0;
        }
        for(j=1;j<y;j++)
        {
            if(arr[i][0]!=arr[i][j])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}