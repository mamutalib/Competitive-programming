#include<bits/stdc++.h>
using namespace std;
 
typedef long long lg;
 
const lg N=1000;
lg ar[N];
 
int main()
{
    lg n;
    cin>>n;
    while(n--){
        string s;
        char a;
        cin>>s>>a;
        lg len=s.length();
        lg c=0;
        for(lg i=0;i<len;i++)
        {
            if(s[i]==a and i%2==0)
                {
                    cout <<"yes"<<endl;
                    c=1;
                    break;
                }
            
        }
       if(c==0)
            cout<<"no"<<endl;
    }
    

    return 0;
}