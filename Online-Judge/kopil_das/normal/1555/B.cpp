#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll w,h,j,i,n,k,my,mx,t,x1,x2,y1,y2,tx,ty;
    cin>>t;
    while(t--){
        cin>>w>>h;
        cin>>x1>>y1>>x2>>y2;
        cin>>tx>>ty;

        my=y2-y1;
        mx=x2-x1;
        
        if(mx+tx<=w)
        {
            if(x1>=tx)
                cout<<000<<endl;
            else if(w-x2>=tx)
                cout<<0000<<endl;
            else if((tx-x1)<=w-x2)
                cout<<tx-x1<<endl;
        }
        else if(my+ty<=h)
        {
            if(y1>=ty)
                cout<<0<<endl;
            else if(h-y2>=ty)
                cout<<00<<endl;
            else if((ty-y1)<=h-y2)
                cout<<ty-y1<<endl;
        }
        else
                cout<<-1<<endl;


        

        }   
        
}