#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int x=0,i,j;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin >>s[i];
    }
    
    for(i=0;i<n;i++){
       for(j=0;j<4;j++)
       {
           if(s[i][j]=='O' && s[i][j+1]=='O')
           {
               x=1;
               cout<<"YES"<<endl;
               s[i][j]='+';
               s[i][j+1]='+';
               break;
           }
       }
       if(x==1)
       break;
    }
    if(x==0)
        {cout<<"NO"<<endl;
            return 0;
        }
    for(i=0;i<n;i++)
        cout<<s[i]<<endl;

    return 0;
}