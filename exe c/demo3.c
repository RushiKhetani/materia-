#include<stdio.h>

int main()
{
	int i,n,sum=0,ele[10];
	printf("Enter length of elements: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&ele[i]);
		sum +=ele[i];
	}
	
	printf("sum is %d",sum);
	printf("avg is %d",sum/n);
	
}
