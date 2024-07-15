//14.WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
	int num1,num2,num3,minimum;
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	printf("\nEnter the num3 = ");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3)
	{
		printf("largest number is: %d", num1);
	}
	else if (num2>num1 && num2>num3)
	{
		printf("largest number is: %d", num2);
	}
	else 
	{
		printf("largest number is: %d", num3);
	}
	
	return 0;
}
