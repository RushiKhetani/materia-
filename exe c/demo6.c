#include<stdio.h>
#include<string.h>

int main()
{
	int i,n,a=0,b=1,c;
	scanf("%d",&n);
	
	printf("fibo series is: \n");
	printf("0\n");
	printf("1");
	
	for(i=0; i<n-2; i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
}
