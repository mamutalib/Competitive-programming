#include <iostream>
using namespace std;
int main() {
    int n,a;
    cin>>n>>a;
    int min = a, max = a, ans = 0;
    for(int i = 1; i<n; i++){
        int num;
        cin>>num;
        if(num>max){
            ans++;
            max = num;
        }
        if(num<min){
            ans++;
            min = num;
        }
    }
    cout<<ans<<endl;
}