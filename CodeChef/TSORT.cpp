#include <iostream>
#include <algorithm>
using namespace std;

/*void sort(int arr[],int n)
{

    int i,j,temp;
     for(i=0; i<n; i++){
        for(j=0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }


    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}*/
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}
