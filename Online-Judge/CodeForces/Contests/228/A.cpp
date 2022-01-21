#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int s[5];
   int count=0,i;

   for(i=0; i<4; i++)
   {
        scanf("%lld",&s[i]);

   }
   sort(s,s+4);
   for(i=0; i<4; i++)
   {
        if (s[i]==s[i+1])
            count++;
   }
   printf("%d",count);

   return 0;


}