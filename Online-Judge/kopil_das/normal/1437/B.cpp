#include<iostream>

using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n,moves=0,k=0;
        cin>>n;
        char s[n];

        cin>>s;

        for(i=0; ; )
            {
                for(j=i+1;j<n;j++)
                {
                    if(s[i]==s[j])
                        k++;
                }
                break;
            }
        if(k==(n-1))
        {
            cout<<moves<<endl;
            continue;
        }
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                moves++;
                i++;
                break;
            }
            break;
        }
        cout<<moves<<endl;
    }
}