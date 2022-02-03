#include<stdio.h>

int fact(int n)
{
	if(n>1)
		return n*fact(n-1);
	return n;
}

int main()
{
	int f;
	printf("enter a number");
	scanf("%d",&f);
	printf("%d",fact(f));
}
