#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,i,j,x,value,y,a;
    cin>>n;
    vector<vector<int>>v(n);
    for(i=0;i<n;i++){
        vector<int>row;
        for(j=0;j<2;j++)
            {
                cin>>value;
                v[i].push_back ( value );
            }
    }

    for(i=0;i<n;i++){
        x=v[i][0];
        //a ==1st camel to spit pos
        a=v[i][0]+v[i][1];

       for(j=i+1;j<n;j++)
            {
                //y== 2nd camel to spit pos
                y=(v[j][0]+v[j][1]);
                if(x==y && a==v[j][0])
                    {
                        cout<<"YES";
                        return 0;
                    }
            }

    }
    cout<<"NO";
}