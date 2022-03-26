#include <stdio.h>
int main() {
    char a[10];
    int b,i,count=0;
    scanf("%d",&b);
    for(i=0;i<=b;i++){
    gets(a);
    if(a[0]=='+'||a[2]=='+')
        count++;
    else if(a[0]=='-'||a[2]=='-')
        count--;
    }
    printf("%d",count);
}