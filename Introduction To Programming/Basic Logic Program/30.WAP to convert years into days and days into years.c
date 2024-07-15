//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	float years,days;
	printf("enter your years");
	scanf("%f",&years);
	days=years*365;
	years=days/365;
	printf("Total days is=%f Total years is=%f",days,years);
	
	return 0;
		
}
