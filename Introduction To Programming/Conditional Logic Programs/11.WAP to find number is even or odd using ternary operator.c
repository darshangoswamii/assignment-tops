//11.WAP to find number is even or odd using ternary operator
#include<stdio.h>
void main()
{
	int num;
	printf("\nEnter the number =");
	scanf("%d",&num);
	
	(num&2==0)?
	printf("\n%d is odd number",num):
	printf("\n%d is even number",num);
	
	
	
}
