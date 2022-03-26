#include<stdio.h>
#include<string.h>

void string_sort(char arr[],int n)
{
    int i,j;
    char swap;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
}

int main()
{
    int i,len1,len2,len3,res;
    char guest[1000],host[1000],pile[1000];
    gets(guest);
    gets(host);
    gets(pile);
    len1=strlen(guest);
    len2=strlen(host);
    len3=strlen(pile);
    if((len1+len2)==len3)
    {
        strcat(guest,host);
        len1=strlen(guest);
        string_sort(guest,len1);
        string_sort(pile,len3);
        res=strcmp(guest,pile);
        if(res==0)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
}