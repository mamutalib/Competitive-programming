#include <bits/stdc++.h>
using namespace std;

int prefixProduct(int a[], int n){
    for (int i = 1; i<n; i++) {
        a[i] = a[i]*a[i-1];
    }

    for (int i=0; i<n-1; i++){
        cout << a[i]<<", ";
    }
    cout << a[n - 1]; 
    return 0;
}

int main(){
    int arr[5];
    for(int i =0; i<5; i++){
        cin >> arr[i];
    }
    // int arr[] = {2,4,6,5,10};

    prefixProduct(arr,sizeof(arr)/sizeof(arr[0]));

    return 0;
}