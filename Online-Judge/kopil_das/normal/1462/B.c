#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

	while(t--)
	{
		int n;
	
		scanf("%d",&n);
		char ar[n];
		char str[]="2020";
		scanf("%s",ar);
		int k=0,a=0,b=0;
		for(int i=0;i<n;i++)
		{
			if(ar[i]=='2' && ar[i+1]=='0' && k<2)
			{
				if(k==0)
					a=i+2;
				else
					b=i+1;
				i+=1;
				k++;
			}
		}
		int res = strcmp(str, ar);
		if(res==0)
		    printf("YES\n");
		else if((b-a)>2 && a>0 && b>0)
			printf("YES\n");
		else
			printf("NO\n");

	
	}
}