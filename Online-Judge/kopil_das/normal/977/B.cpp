#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int n;
    cin>>n;
    string s;
    vector<char>k;
    cin>>s;
    int m=0,p=1;
    int ans=0,max=0;
    k.push_back(s[0]);
    k.push_back(s[1]);
    while(n--)
    {
        if(n<p)
            break;
    for(int i=n+1;i<n;i++){
        if(s[m]==s[i] and s[p]==s[i+1])
            {
                ans++;
                i++;
            }
       
    }
    if(ans>max)
    {
        k.clear();
        k.push_back(s[m]);
    k.push_back(s[n]);
    } 
    m++;
    p++;

    }   
    cout<<k[0]<<k[1];


        

          
        
}