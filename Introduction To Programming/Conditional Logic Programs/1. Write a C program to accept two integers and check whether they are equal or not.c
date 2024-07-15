//1. Write a C program to accept two integers and check whether they are equal
//or not

#include<stdio.h>
void main()
{
	int m,n;
	printf("\nEnter the m value =");
	scanf("%d",&m);
	printf("\nEnter the n value =");
	scanf("%d",&n);
	
	if(m==n)
	{
		printf("\nM value and N value are equal");	
	}
	else
	{
		printf("\nM value and N value are not equal");
	}
}
