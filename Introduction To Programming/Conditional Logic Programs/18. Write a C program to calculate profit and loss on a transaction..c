//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
void main()
{
	int sale,cost,count;
	printf("\nEnter the costing price = ");
	scanf("%d",&cost);
	printf("\nEnter the saleing price = ");
	scanf("%d",&sale);
	
	if(sale>cost)
	{
		count = sale - cost;
		printf("\nYou can book your profit amount : %d",count);
	}
	else if(sale>cost)
	{
		count = cost - sale;
		printf("\nYou can book your loss amount : %d",count);
	}
	else 
	{
		printf("\nYou are in a no profit, no loss condition");	
	}
}
