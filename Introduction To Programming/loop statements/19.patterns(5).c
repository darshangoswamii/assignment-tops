//Patterns:
/*
1
2 3 
4 5 6
7 8 9 10
*/
#include<stdio.h>
void main()
{
	int row,i,j,k=1;
	printf("\nEnter the row=");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
