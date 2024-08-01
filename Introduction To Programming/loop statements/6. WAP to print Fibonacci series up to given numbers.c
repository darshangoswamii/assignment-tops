//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int range,num1,num2,num3,i;
	printf("\nEnter the range = ");
	scanf("%d",&range);
	
	printf("%d\t%d",num1,num2);
	
	for(i=1;i<=range-2;i++)
	{
		num3 = num1 + num2;
		printf("\t%d",num3);
		num1 = num2;
		num2 = num3;
	}
	
	
	return 0;
}
