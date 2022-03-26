#include<bits/stdc++.h>
using namespace std;

typedef long long lg;

int main()
{
    lg t,xx,yy,ans;
    vector<lg>x;
    cin>>t;
    while(t--)
    {
        
        cin>>xx>>yy;
        x.push_back(xx+yy);
    }
        lg mxx=*max_element(x.begin(),x.end());
        
        cout<<mxx<<endl;
    
    
    
    return 0;
}