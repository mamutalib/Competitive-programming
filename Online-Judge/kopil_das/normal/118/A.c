#include <stdio.h>
#include<string.h>
int main() {
    char text[200];
    int i, len;
    scanf("%[^\n]",text);
    len = strlen(text);
    for(i=0;i<len;i++)
        if(text[i]!='a'&&text[i]!='A'&&text[i]!='o'&&text[i]!='O'&&text[i]!='y'&&text[i]!='Y'&&text[i]!='e'&&text[i]!='E'&&text[i]!='u'&&text[i]!='U'&&text[i]!='i'&&text[i]!='I')
    {
        if(text[i]<=90)
            text[i]+=32;
        printf(".%c",text[i]);
    }
}