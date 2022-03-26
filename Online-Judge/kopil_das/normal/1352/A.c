#include <stdio.h>
#include<string.h>

int main()
{
    int i,t,len,j,k,num,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char a[10000];
        scanf("%s",a);
        len=strlen(a);
        char term[10000];
        num=0;
        c=0;
        for(j=0;j<len;j++)
        {
            if(a[j]!='0')
            {
                num++;
                term[c]=a[j];
                c++;
                for(k=j+1;k<len;k++){
                    term[c]='0';
                    c++;
                }
                term[c]=' ';
                c++;
            }
        }
        printf("%d\n",num);
        for(k=0;k<c;k++)
            {
            printf("%c",term[k]);
            }
        printf("\n");
    }
}