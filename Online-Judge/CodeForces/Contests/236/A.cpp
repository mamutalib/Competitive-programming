#include <stdio.h>
#include <string.h>
int main()
{
    char str[101],temp;
    scanf("%s",str);

    int len,i,j,count=0;
    len = strlen(str);
    //for sorting the string
    for(i=0; i<len; i++) {
        for(j=0; j<len-1-i; j++){
            if(str[j]>str[j+1]){
                temp = str[j] ;
                str[j] = str[j+1] ;
                str[j+1] = temp ;
            }
        }
    }

    for(i=0; i<len; i++){
        if(str[i]!= str[i+1])
            count++;
    }

    if(count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }


    //End of Boys and Girls;
}