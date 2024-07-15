//3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
void main()
{
	int year;
	printf("\nEnter the year =");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\n%d is leap year",year);
	}
	else
	{
		printf("\n%d is not leap year",year);
	}
}
