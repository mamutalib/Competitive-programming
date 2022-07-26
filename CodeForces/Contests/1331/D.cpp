#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    gets(a);
    int len=strlen(a);
    if((a[len-1]-48)%2!=0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}