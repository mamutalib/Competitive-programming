#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d%d",&n,&t);
    char ch[n];
    scanf("%s",ch);
    for(i=0;i<t;i++)
        for(j=0;j<n;j++)
        {
            if(ch[j]=='B' && ch[j+1]=='G')
            {
                ch[j]='G';
                ch[j+1]='B';
                j++;
            }
        }
        printf("%s",ch);
}