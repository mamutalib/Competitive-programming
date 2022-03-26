#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char ch[200];
    scanf("%s",ch);
    t=strlen(ch);
    for(i=0;i<t;i++)
        {
            if(ch[i]=='.')
            {
                printf("0");
            }
            else if(ch[i]=='-')
            {
                if(ch[i+1]=='.')
                    printf("1");
                else if(ch[i+1]=='-')
                    printf("2");
                i++;
            }
        }
}