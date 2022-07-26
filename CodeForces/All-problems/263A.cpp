#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];
    int i,j,r,c;
    for (i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j]==1){
                r = i+1;
                c = j+1;
            }
        }
    }
    int move = abs(r-3)+abs(c-3);
    cout << move << endl;

}