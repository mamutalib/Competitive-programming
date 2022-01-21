#include <iostream>
using namespace std;

int main(){
    
    int button;
    cin >> button;
    int n[button];
    int count1 = 0, count2 = 0;
    for(int i =0; i<button; i++){
        cin >> n[i];
        if(n[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(button==1 && count1 ==1){
        cout << "YES" << endl;
    }
    else if(button==1 && count2 ==1){
        cout << "NO" << endl;
    }
    else if(count1 == (button-1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}