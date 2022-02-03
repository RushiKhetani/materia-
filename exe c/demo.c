#include<stdio.h>

int main()
{
	int i,j,n,flag=0,count=0;
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=2; i<n; i++)// if we want to print till n than replace count<n
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			count++;
			printf("%d\n",i);
		}
		flag=0;	
	}
}
