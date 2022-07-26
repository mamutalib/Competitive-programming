#include <bits/stdc++.h>
using namespace std;
void borze(string str){
    int len = str.length();
    for(int i = 0; i<len;){
        if(str[i]=='.'){
            str[i] = '0';
            i++;
        }
        else if (str[i] == '-' && str[i+1] =='.') {
            str[i] = '1';
            i+=2;
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            str[i] = '2';
            i = i+2;
        }
    }
    for(int i =0; i<len; i++){
        if(str[i]=='.'){
            continue;
        }
        else if(str[i]=='-'){
            continue;
        }
        else{
            printf("%c",str[i]);
        }
    }
}
int main()
{
    string s;
    cin >> s;
    borze(s);

}