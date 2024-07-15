// Write a program to make Simple calculator to make addition subtraction
//multiplication division and modulo

#include<stdio.h>
int main()
{
	int no1,no2,addition,subtraction,multiplication,division;
	printf("enter frist value");
	scanf("%d",&no1);
	printf("enter 2nd value");
	scanf("%d",&no2);
	addition=no1+no2;
	subtraction=no1-no2;
	multiplication=no1*no2;
	division=no1/no2;
	printf("addition=%d subtraction=%d multiplication=%d division=%d",addition,subtraction,multiplication,division);
	
	return 0;
}

