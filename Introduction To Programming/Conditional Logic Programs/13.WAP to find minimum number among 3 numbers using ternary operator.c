//13.WAP to find minimum number among 3 numbers using ternary operator
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
	
	minimum = (num1<num2)?((num1<num2)?num1:num2):((num2<num3)?num2:num3);
	printf("minimum number is: %d", minimum);
	
	return 0;
}
