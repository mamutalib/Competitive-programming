#include <iostream>
using namespace std;
/*
CodeForces Problem: 69A
*/
int main(){
    int num,a,b,c,s1=0,s2=0,s3=0;
    cin>>num;
    for(int i=0; i<num; i++){
        scanf("%d%d%d",&a,&b,&c);
        s1=s1+a;
        s2=s2+b;
        s3=s3+c;
    }
    if(s1==0 && s2==0 && s3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;;;
    }

    return 0;
}