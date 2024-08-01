//14.Perform 2D matrix array
#include<stdio.h>
int main()
{
	int arr[100][100],i,j,row,col;
	
	printf("Enter the row : ");
	scanf("%d",&row);
	printf("Enter the col : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the array[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nYour array is :\n ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
