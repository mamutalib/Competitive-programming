#include <stdio.h>
#include <string.h>
int main()
{
    char a[150];
    int i,len,up=0,lo=0;
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            lo++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            up++;
        }
    }
    if(up>lo)
    {
        for(i=0;i<len;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                printf("%c",a[i]);
            }
            else
            {
                printf("%c",a[i]-32);
            }
            
        }
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                printf("%c",a[i]);
            }
            else
            {
                printf("%c",a[i]+32);
            }
        }
    }
    printf("\n");
    return 0;
    
}