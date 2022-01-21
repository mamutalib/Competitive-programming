#include <stdio.h>
#include <string.h>

int main()
{
    char s[101],t[101];
    gets(s);
    gets(t);

    int len1,len2;
    int i,j,y=0;


    len1 = strlen(s);
    len2 = strlen(t);

    if(len1!=len2)
    {
        printf("NO");
    }


    else {
        for(i=0,j=len1-1; i<len1; i++,j--) {
            if(s[i]==t[j]){
                y++;
            }
            else
            {
                printf("NO");
                break;
            }

        }
    }


    if(len1==y)
    {
      printf("YES");
    }

    //Good Bye
}