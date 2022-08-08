#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int item) {
    if(start>end){
        return -1;
    }
    int mid; 
    mid = (start+end)/2;
    if(arr[mid]==item){
        return mid;
    }
    else if(arr[mid]<item) {
        return binarySearch(arr,start, mid-1, item);
    }
    return binarySearch(arr,mid+1, end, item);
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

    int ans = binarySearch(arr, 0, n-1, item);
    if(ans ==-1){
        cout << "item not found" << endl;
    }
    else{
        cout << "item found" << endl;
    }
}