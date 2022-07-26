#include <stdio.h>
#include <string.h>
int main()
{
    char str[111];
    gets(str);
    int i,len;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]<97)
        {
            str[i]=str[i]+32;
        }
    }
    for(i=0;i<len;i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
            continue;
        }
        else
        {
            printf(".%c",str[i]);
        }
    }
    printf("\n");
}