#include <stdio.h>
#include <string.h>
int main()
{
    char p[111] ; 
    int i,len,count=0,possible=0;
    scanf("%[^\n]",p);
    len=strlen(p);
    for(i=0;i<len;i++)
    {
        if(p[i]>=33 && p[i]<=126)
        {
          //  count++;
            if(p[i]=='H'|| p[i]=='Q' || p[i]=='9')
            {
                possible++;
                break;
            }
        } 
    }
    if(possible>0)
    {
        printf("YES\n");
        
    }
    else
    {
        printf("NO\n");
    }
    
}