
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	int k,n;
	while(t--)
	{
	    scanf("%d%d",&k,&n);
	    char s[k];
	    int i=0,p=1;
	    while(i<k)
	    {
	        while(p<=n && i<k)
	         {
	             s[i++]='a';
	             p++;
	         }
	            p=1;
	            while(p<=n && i<k)
	             {
	                 s[i++]='b';
	                 p++;
	             }
	            p=1;
	            while(p<=n && i<k)
	             {
	                 s[i++]='c';
	                 p++;
	             }

	        p=1;
	    }
	    s[i]='\0';
	    printf("%s\n",s);

	}
	return 0;
}