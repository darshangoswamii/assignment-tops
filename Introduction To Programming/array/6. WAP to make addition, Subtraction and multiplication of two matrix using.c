//6. WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array
#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],row,col,i,j,k;
	char op;
	printf("\nEnter Row Size:");
	scanf("%d",&row);
	printf("\nEnter col size:");
	scanf("%d",&col);
	printf("\nEnter First matrix value:");
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter value arr[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter second matrix value:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter value arr[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nFirst matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n second matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nEnter the oprtoer = ");
	scanf(" %c",&op);
	
	switch (op)
	{
		case '+':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					c[i][j] = a[i][j] + b[i][j];
				}
			}
		printf("\n sum of matrix:\n");

		break;
	
		case '-':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
				c[i][j] = a[i][j] - b[i][j];
				}
			}
	printf("\n sum of matrix:\n");

	break ;
	case '/':
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j] = a[i][j] / b[i][j];
		}
	}
	printf("\n sum of matrix:\n");

	break;
	
	case '*':
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				for(k=0;k<row;k++)
				{
					c[i][j] += a[i][k]*b[k][j]; 
				}
			}
		}
	printf("\n multi of matrix:\n");

	break;
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
}



