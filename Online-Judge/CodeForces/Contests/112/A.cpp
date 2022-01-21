#include <stdio.h>
#include <string.h>
int main()
{ 
    char str1[111],str2[111];
    scanf("%s%s",str1,str2);
    int c=strcmpi(str1,str2);
    if(c==0)
    {
        printf("0\n");
    }
    else if(c<1)
    {
        printf("-1\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}