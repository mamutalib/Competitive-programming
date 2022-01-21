#include <stdio.h>

int main()
{
   int n;

   scanf("%d",&n);

   char s[n];
   scanf("%s",s);

   int i,a=0,d=0;

   for(i=0; i<n; i++)
   {
       if(s[i]=='A') {
        a++;
       }
       else if(s[i]=='D'){
        d++;
       }
   }
   if(a>d){
    printf("Anton");
   }
   else if(a<d){
     printf("Danik");
   }
   else if(a==d){
    printf("Friendship");
   }

}