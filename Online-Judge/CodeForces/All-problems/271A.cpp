#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    year++;
    while(true){
        int a,b,c,d;
        a = year/1000;
        b = (year/100)%10;
        c = (year/10)%10;
        d = year%10;
        if( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << year << endl;
            break;
        }
        else {
            year++;
            continue;
        }
    }
}