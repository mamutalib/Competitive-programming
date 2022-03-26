#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    if(k%4==0||k%7==0||k%47==0||k%47==7||k%47==4)
        printf("YES");
    else
        printf("NO");

}