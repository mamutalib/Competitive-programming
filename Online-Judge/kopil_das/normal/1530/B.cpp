#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int h,w,j,i,n,k,mx;
    cin>>n;
    while(n--){
        cin>>h>>w;
        int ar[h][w];
        for(i=0;i<h;i++)
            {
                for(j=0;j<w;j++)
                        {
                            if(h%2==0 and i==h-2)
                                cout<<0;
                            else
                            {
                                if(i%2==0)
                                {
                                    if(j%2==0)
                                          {
                                              if(j==w-2)
                                                cout<<0;
                                              else
                                                cout<<1;
                                          }
                                    else
                                         {
                                            
                                              if(j==w-1)
                                                cout<<1;
                                              else
                                                cout<<0;}
                                }
                                else if(h%2==0 and i==h-1)
                                {
                                   if(j%2==0)
                                          {
                                              if(j==w-2)
                                                cout<<0;
                                              else
                                                cout<<1;
                                          }
                                    else
                                         {
                                            
                                              if(j==w-1)
                                                cout<<1;
                                              else
                                                cout<<0;}
                                }
                                else
                                    cout<<0;
                            }
                        }
                        cout<<endl;
                    }
                         cout<<endl;                    


    }


    
        
}