#include <bits/stdc++.h>
using namespace std;

int suffixProduct(int a[], int n){
    int suffix[n];
    suffix[n - 1] = a[n - 1];

    // Compute suffix products
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = a[i] * suffix[i + 1];
    }
    for (int i=0; i<n; i++){
        cout << a[i]<< " ";
    }
    return 0;
}

int main(){
    int arr[5];
    for(int i =0; i<5; i++){
        cin >> arr[i];
    }


    suffixProduct(arr,sizeof(arr)/sizeof(arr[0]));

    return 0;
}
