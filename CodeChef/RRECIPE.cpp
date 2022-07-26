#include <iostream>
#include <string.h>
#define mod 10000009
using namespace std;
#define ll  long long int

int main()
{
    char str[1000001];
    int t;
    cin >> t;
    
    while(t--)
    {
        cin >> str;
        ll len;
        len = strlen(str);
        
        ll i,count = 1 , j;
        
        j = len-1;
        for(i=0; i<=j; i++,j--)
        {
            if(str[i]=='?' && str[j]=='?' )
            {
               count = (count*26)%mod;
            }
            else if(str[i]==str[j])
            {
                continue;
            }
            else if(str[i]!='?' && str[j]!='?')
            {
                count = 0;
                break;
            }
        }
        cout << count << endl;
        
    }
}