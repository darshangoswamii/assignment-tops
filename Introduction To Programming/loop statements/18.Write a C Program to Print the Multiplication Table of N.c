//18.Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main()
{
	int no,i;
	printf("\nEnter the number for table : ");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d X %d = %d",no,i,no*i);
	}
	
	return 0;
}

