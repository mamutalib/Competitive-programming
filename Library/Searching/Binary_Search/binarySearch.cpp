#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int start, int end) {
    int mid;
    while(start<end){
        mid = (start+end)/2;
        if(arr[mid]==n){
            return mid;
        }
        else if(arr[mid]<n){
            end = mid-1;
            
        }
        else{
            start = mid+1;
        }
    }
    return -1;

}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    int item;
    cin >> item;

    int ans = binarySearch(arr, item, 0, n-1);
    if(ans ==-1){
        cout << "item not found" << endl;
    }
    else{
        cout << "item found" << endl;
    }


}