//Patterns:
/*
*
* *
* * * 
* * * *
* * * * *
* * * *
* * *
* *
*
*/
#include<stdio.h>
into main()
{
	int row,i,j;
	printf("\nEnter the row=");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");

	}
	for(i=row-1;i>=1;i--)//5
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

