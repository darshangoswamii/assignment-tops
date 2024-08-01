//Patterns:
/*
		*
	   * *
	  * * * 
	 * * * *
	* * * * *
*/
#include<stdio.h>
void main()
{
	int row,i,j,k,spc;
	printf("\nEnter the row=");
	scanf("%d",&row);
	spc = row + 3;
	
	for(i=1;i<=row;i++)
	{
		for(k=spc;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		spc--;
	}
}
