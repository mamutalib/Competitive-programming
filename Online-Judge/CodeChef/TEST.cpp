#include <stdio.h>
int main(){
    int n,a;
    for(int i=0; i<100; i++)
    {
        scanf("%d",&a);
        if(a==42){
            break;
        }
        else
        {
            printf("%d\n",a);
        }
    }


}
