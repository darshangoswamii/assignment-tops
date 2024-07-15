//25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
	int avg,num1,num2,num3,num4,num5;
	printf("\nEnter the 5 expense find average");
	printf("\nEnter the expense=");
	scanf("%d",&num1);
	printf("\nEnter the expense=");
	scanf("%d",&num2);
	printf("\nEnter the expense=");
	scanf("%d",&num3);
	printf("\nEnter the expense=");
	scanf("%d",&num4);
	printf("\nEnter the expense=");
	scanf("%d",&num5);
	
	avg=num1+num2+num3+num4+num5;
	avg=avg/5;
	printf("\nYour average expense is %d", avg);
	//printf("\nyour average is %d",avg);
	
	return 0;
}
