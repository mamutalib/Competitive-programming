#include<stdio.h>
#include<string.h>
int main()
{
    char b[1000];
    gets(b);
    if(b[0]>=97)
        b[0]=(b[0]-32);
    puts(b);

}