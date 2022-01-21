#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    while(n--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int x1,y1,x2,y2;
        x1 = max(a,b);
        y1 = min(a,b);
        x2 = max(c,d);
        y2 = min(c,d);

        if(x1>y2 && x2> y1){
            cout << "YES"<< endl;
        }
        else {
            cout << "NO"<< endl;
        }

    }
}