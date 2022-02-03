#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n=0;
	char str[10],str2[10];
	
	printf("Enter s string: ");
	gets(str);
		
	for(i=0; str[i]!='\0'; i++)
		n++;
		
	for(j=n-1; j>=0; j--)
	{
		printf("%c",str[j]);	
	}
}
