#include <stdio.h>
int main()
{
    int n,p,v,t;
    scanf("%d",&n);
    int i,s=0;
    for(i=0; i<n; i++){
        scanf("%d%d%d",&p,&v,&t);
        if(p==1 && v==1 && t==1){
            s++;
        }
        else if(p==1 && v==1 && t==0){
            s++;
        }
         else if(p==1 && v==0 && t==1){
            s++;
        }
         else if(p==0 && v==1 && t==1){
            s++;
        }


    }
     printf("%d\n",s);
}