#include <stdio.h>
#include <string.h>
int main()
{
				char math[150];
				scanf("%s",math);
				int len=strlen(math);
				
				int i,j,temp;
				for(i=0; i<len; i++) {
								for(j=0; j<len-1-i; j++) {
												if(math[j]>math[j+1]) {
																temp = math[j];
																math[j]= math[j+1];
																math[j+1]= temp;
												}
								}
				}
				
			 for(i=(len/2),j=0; i<len; i++,j++) {
								
								printf("%c",math[i]);
								if(j<(len/2)) {
												
												printf("+");
								}
				}
				
				return 0;
}