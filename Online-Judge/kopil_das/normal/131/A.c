#include<stdio.h>
#include<string.h>
int main() {
    char text[200];
    int i,len,n=0;
    gets(text);
        len = strlen(text);
        for(i=1;i<len;i++){
            if(text[i]>=65&&text[i]<=90)
                n++;
        }
    if(n==len-1)
    {
        for(i=0;i<len;i++)
            {
                if(text[i]<=90&&text[i]>=65)text[i]+=32;
                else if(text[i]>=97&&text[i]<=122)text[i]-=32;
            }
    }
    puts(text);
}