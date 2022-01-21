#include <stdio.h>
int main()
{
				int stone;
				char colour[51];
				scanf("%d",&stone);
				scanf("%s",colour);
				
				int i,j,count=0;
				for(i=0; i<stone; i++) {
								
								if(colour[i]==colour[i+1]) {
												count++;
								}
				}
				printf("%d",count);
				
				
				return 0;
}