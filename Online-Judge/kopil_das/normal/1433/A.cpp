#include<iostream>

using namespace std;

int main()
{
    int t,x,i,v;
    cin>>t;
    while(t--)
    {
        cin>>x;
        i=1;
        v=x;
        while(x/=10)
        {
            i++;
            v=x;
        }
        v--;
        v*=10;
        if(i==1)
            v+=1;
        else if(i==2)
            v+=3;
        else if(i==3)
            v+=6;
        else if(i==4)
            v+=10;
        cout<<v<<endl;
    }

}